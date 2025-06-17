#include <stdio.h>
#include <string.h>

    struct expense {
        int amount;
        char date[20];
        char description[100];
    };

    void initialize_file (); // initialize file for the header 
    void writing_data (); // writing data
    void reading_data (); // reading data
    void deleting_data (); // deleting data

int main (void) {


    initialize_file(); // for the header 

    int choices; 

    do {

        printf ("\n[EXPENSE TRACKER]\n"); // menu
        printf ("1. Add Expense\n");
        printf ("2. View Expense\n");
        printf ("3. Delete Expense\n");
        printf ("4. Exit\n");

        printf ("Enter your choice: "); // choice input
        scanf ("%d", &choices);

        switch (choices)
        {
        case 1:
            writing_data(); // writing function call
            break;
        
        case 2:
            reading_data(); // reading function call
            break;

        case 3:
            deleting_data();
            break;

        case 4:
            printf ("\n[PROGRAM HAS ENDED]\n");
            break;
        
        default:
            printf ("Invalid Input! Please Try Again (1-4 only).\n"); // default
            break;
        }      

    } while (choices != 4);  // keep prompting until I exit (4).

    return 0;

}

void initialize_file () { // for the header
    
    FILE *fPointer;
    fPointer = fopen("Expense_Tracker.txt", "w"); // opening a file in write mode to write the headers
    
    fprintf (fPointer, "| Date | Description | Amount |\n");
    fprintf (fPointer, "\n");
    
    fclose (fPointer);

}

void writing_data (){

    struct expense e;

    FILE *fPointer;
    fPointer = fopen ("Expense_Tracker.txt", "a"); // opening a file in append mode

    printf ("\n[WRITING DATA TO FILE]\n");

    // prevents from skipping fgets 'date'
    while (getchar() != '\n'); 

    printf ("Enter Date (YYYY-MM-DD): "); // input date
    fgets (e.date, sizeof (e.date), stdin);

    printf ("Enter Description: "); // input description
    fgets (e.description, sizeof (e.description), stdin);

    // remove newline from the string input
    e.date[strcspn(e.date, "\n")] = 0; 
    e.description[strcspn(e.description, "\n")] = 0;

    printf ("Enter Amount: "); // input amount
    scanf ("%d", &e.amount);

    // clears leftover newline character 
    while (getchar() != '\n'); 

    fprintf (fPointer, "%s\t%s\t %d\t \n", e.date, e.description, e.amount); // print in the file

    fclose (fPointer); // closing the file

}

void reading_data (){

    struct expense e;

    FILE *fPointer;
    fPointer = fopen ("Expense_Tracker.txt", "r"); // open the file in read mode for reading data

    printf("\n[READING DATA FROM FILE]\n"); // read data from the file

    char line[256]; // buffer

    int headersToSkip = 2;
        for (int i = 0; i < headersToSkip; i++) { // store in the buffer to skip
        fgets(line, sizeof(line), fPointer); // skip each header line
        }

    printf ("|   Date   | Description | Amount |\n");

    while (fgets(line, sizeof(line), fPointer) != NULL){ // Keep reading one line from the file until the end of the file is reached

        // cleanup newline 
        e.date[strcspn(e.date, "\n")] = 0;
        e.description[strcspn(e.description, "\n")] = 0;

        printf("%s", line);
    
    }

    fclose (fPointer); // closing the file

}

void deleting_data(){ // create a temp file then replace/rename the current existing file 

    struct expense e; 

    FILE *fPointer;
    fPointer = fopen ("Expense_Tracker.txt", "r"); // main file 

    FILE *tempFile;
    tempFile = fopen ("temp.txt", "w"); // temporary file 

    char line[256];
    char targetDate[20];
    int deleted = 0;

    printf("\n[DELETE EXPENSE BY DATE]\n");

    // Ask for the date to delete
    printf("Enter Date (YYYY-MM-DD) to delete: ");
    while (getchar() != '\n'); // clear newline
    
    fgets(targetDate, sizeof(targetDate), stdin);
    targetDate[strcspn(targetDate, "\n")] = 0; // remove newline

    int lineCount = 0;

    while (fgets(line, sizeof(line), fPointer)) {
        if (lineCount < 2) {
            fputs(line, tempFile); // copy headers
        } else {
            char fileDate[20], description[100];
            int amount;

            // Use sscanf to extract fields
            if (sscanf(line, "%19[^\t]\t %99[^\t]\t %d", fileDate, description, &amount) == 3) {
                // Trim spaces
                while (fileDate[0] == ' ') memmove(fileDate, fileDate + 1, strlen(fileDate));
                if (strcmp(fileDate, targetDate) != 0) {
                    fputs(line, tempFile); // keep if not matching
                } else {
                    deleted = 1;
                }
            } else {
                fputs(line, tempFile); // fallback: keep malformed lines
            }
        }
        lineCount++;
    }

    fclose(fPointer);
    fclose(tempFile);

    remove("Expense_Tracker.txt");        // remove original
    rename("temp.txt", "Expense_Tracker.txt");  // rename temp to original

    if (deleted)
        printf("Expense with date %s deleted successfully.\n", targetDate);
    else
        printf("No entry with date %s found.\n", targetDate);

} 
