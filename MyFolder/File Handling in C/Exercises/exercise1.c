#include <stdio.h>

int main (){

    //Declaration 
    FILE *fPointer;
    char sentence[1000];

    //Request for User Input
    printf ("\nInput a sentence for the File: ");
    fgets (sentence, sizeof(sentence), stdin);

    fPointer = fopen ("test.txt", "w"); //Open the File

    if (fPointer == NULL) {
        printf("The file is not opened!\n");
        return 1;
    } else {
        printf ("The File text.txt is created successfully....!!\n"); //Output sa console
    }

    //Writing the Sentence to the File
    fprintf (fPointer, "%s", sentence);

    fclose (fPointer); //Close the File

    return 0;

}