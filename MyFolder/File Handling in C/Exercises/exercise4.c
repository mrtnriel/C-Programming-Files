#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LENGTH 1024

int main() {
    FILE *fPointer;
    char fileName[100];
    char lines[MAX_LINES][MAX_LENGTH];
    char newLine[MAX_LENGTH];
    int replaceLine, i = 0, totalLines = 0;

    // Step 1: Ask for file name
    printf("\nInput the file name to be opened: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = 0; // Remove newline

    // Step 2: Open file for reading
    fPointer = fopen(fileName, "r");
    if (fPointer == NULL) {
        printf("Error: Could not open file %s\n", fileName);
        return 1;
    }

    // Step 3: Read all lines into array and print each with line number
    while (fgets(lines[i], MAX_LENGTH, fPointer) != NULL && i < MAX_LINES) {
        // Print the line with its line number (lineCount = i + 1)
        printf("file line %d: %s", i + 1, lines[i]);
        i++;
    }
    totalLines = i;
    fclose(fPointer);

    // Step 4: Ask user for new line and the line number
    printf("\nInput the content of the new line: ");
    fgets(newLine, sizeof(newLine), stdin);
    newLine[strcspn(newLine, "\n")] = 0; // Remove newline

    printf("Input the line number you want to replace: ");
    scanf("%d", &replaceLine);

    // Step 5: Validate line number
    if (replaceLine < 1 || replaceLine > totalLines) {
        printf("Invalid line number. File has %d lines.\n", totalLines);
        return 1;
    }

    // Step 6: Replace the specified line
    snprintf(lines[replaceLine - 1], MAX_LENGTH, "%s\n", newLine);

    // Step 7: Write back to file
    fPointer = fopen(fileName, "w");
    if (fPointer == NULL) {
        printf("Error: Could not open file %s for writing\n", fileName);
        return 1;
    }

    for (i = 0; i < totalLines; i++) {
        fputs(lines[i], fPointer);
    }
    fclose(fPointer);

    printf("\nThe replacement was successful...!!\n");

    return 0;
}