#include <stdio.h>
#include <string.h>

int main(){

    //Declaration
    FILE *fPointer; 
    int characters;
    char fileName [1000];

    printf ("\nEnter the Name of the File to be opened (in .txt form): ");
    fgets (fileName, sizeof (fileName), stdin);

    fileName[strcspn(fileName, "\n")] = 0; //Removes newline

    fPointer = fopen (fileName, "r"); //Opening the File for Reading

    if (fPointer == NULL) {
        printf("The file is not opened!\n");
    } else { 
        printf("The file is opened Successfully!\n");
    }

    //Displaying the Content

    printf ("\nThe content of the File '%s' is: \n", fileName); 

    while ((characters = fgetc(fPointer))!= EOF){
        printf ("%c", characters);
    }

    printf ("\nThis is the content of the File '%s' ", fileName);

    fclose (fPointer);

    return 0;

} 