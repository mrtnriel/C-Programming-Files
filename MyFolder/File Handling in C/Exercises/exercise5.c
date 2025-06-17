#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *fPointer;
    char fileName[100];
    int numLines;
    char line[MAX_LINE_LENGTH];
    int lineCount = 0;  // To keep track of line numbers

    // Step 1: Get file name
    printf("\nInput the file name to be opened: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = 0;  // Remove newline character

    // Step 2: Open file in append mode
    fPointer = fopen(fileName, "a");
    if (fPointer == NULL) {
        printf("Error: Could not open file %s\n", fileName);
        return 1;
    }

    // Step 3: Ask user for how many lines to write
    printf("Input the number of lines to be written: ");
    scanf("%d", &numLines);
    getchar(); // Consume leftover newline from scanf

    printf("The lines are:\n");
    for (int i = 0; i < numLines; i++) {
        fgets(line, sizeof(line), stdin);
        fputs(line, fPointer);
    }

    fclose(fPointer);

    // Step 4: Reopen file in read mode to show final content with line numbers
    fPointer = fopen(fileName, "r");
    if (fPointer == NULL) {
        printf("Error: Could not open file %s\n", fileName);
        return 1;
    }

    printf("\nThe content of the file %s is:\n", fileName);
    while (fgets(line, sizeof(line), fPointer)) {
        printf("file line %d: %s", ++lineCount, line);  // Print line number and line content
    }

    fclose(fPointer);
    return 0;
}