#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fPointer;
    char fileName[1000];
    char line[1000];
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord;

    printf("\nEnter the name of the file to be opened: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = 0;  // Remove newline from file name

    fPointer = fopen(fileName, "r"); // Open file for reading
    if (fPointer == NULL) {
        printf("Error: Could not open file '%s'\n", fileName);
        return 1;
    } else {
        printf("The file is opened successfully!\n");
    }

    printf("\nThe content of the file '%s' are:\n", fileName);

    while (fgets(line, sizeof(line), fPointer)) {
        lineCount++;
        printf("file line %d: %s", lineCount, line);  // Print line with line number

        // Count characters and words in this line
        int i = 0;
        inWord = 0;
        while (line[i] != '\0') {
            if (line[i] != '\n') {  // Exclude newline characters from character count
                charCount++;
            }
            if (isspace(line[i])) {
                inWord = 0;
            } else if (inWord == 0) {
                inWord = 1;
                wordCount++;
            }
            i++;
        }
    }

    fclose(fPointer);

    printf("\nThe number of lines in the file '%s' are : %d\n", fileName, lineCount);
    printf("The number of words in the file '%s' are : %d\n", fileName, wordCount);
    printf("The number of characters in the file '%s' are : %d\n", fileName, charCount);
    printf("\n");

    return 0;
}
