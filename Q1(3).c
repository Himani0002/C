// Write a Program to read content from one file & write it to another file.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    // Get the source file name from the user
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Get the destination file name from the user
    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        return 1;
    }

    // Read content from source file and write it to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Content copied successfully from %s to %s\n", sourceFileName, destinationFileName);

    return 0;
}
