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
    
    // Open the source file in read mode
    sourceFile = fopen("5.1", "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Open the destination file in write mode
    destFile = fopen("5.2", "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    // Copy the contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    return EXIT_SUCCESS;
}