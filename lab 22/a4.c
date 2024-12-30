#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile=fopen("4.2.txt","w");
    fprintf(sourceFile,"world");
    fclose(sourceFile);

    sourceFile=fopen("4.1.txt","w");
    fprintf(sourceFile,"hello");
    fclose(sourceFile);

    // Open the source file (4.2) in read mode
    sourceFile = fopen("4.2.txt", "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Open the destination file (4.1) in append mode
    destFile = fopen("4.1.txt", "a");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    // Read from source file and write to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Contents of 4.2 have been appended to 4.1 successfully.\n");
    return EXIT_SUCCESS;
}