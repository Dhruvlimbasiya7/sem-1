#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int num;
    float fnum;

    // Open a file for writing
    file = fopen("3.txt", "w");

    // Using fprintf to write formatted data to the file
    fprintf(file, "Integer: %d\n", 42);
    fprintf(file, "Float: %.2f\n", 3.14);
    fprintf(file, "Character: %c\n", 'A');

    // Close the file after writing
    fclose(file);

    // Open the file for reading
    
    file = fopen("3.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Using fscanf to read formatted data from the file

    fscanf(file, "Integer: %d\n", &num);
    fscanf(file, "Float: %f\n", &fnum);
    fscanf(file, "Character: %c\n", &ch);

    // Display the read values

    printf("Read from file:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);
    printf("Character: %c\n", ch);

    // Using fputc to write a character to the file

    fclose(file); // Close the file before writing again

    file = fopen("3.txt", "a"); // Open in append mode
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }

    fputc('\n', file); // Write a newline character
    fputc('B', file);  // Write character 'B' to the file

    // Close the file after appending
    fclose(file);

    // Using fgetc to read a character from the file
    file = fopen("3.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read until the end of the file
    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Display the character read
    }
    
    // Close the file after reading
    fclose(file);

    // Using fseek to move the file pointer
    file = fopen("3.txt", "r");
    if (file == NULL) {
        printf("Error opening file for seeking.\n");
        return 1;
    }

    // Move the file pointer to the beginning
    fseek(file, 0, SEEK_SET);
    printf("\nReset file pointer to the beginning.\n");

    // Read and display the first character
    ch = fgetc(file);
    printf("First character: %c\n", ch);

    // Using rewind to reset the file pointer to the beginning
    rewind(file);
    printf("Rewind the file pointer to the beginning.\n");

    // Read and display the first character again
    ch = fgetc(file);
    printf("First character after rewind: %c\n", ch);

    // Close the file
    fclose(file);

    return 0;
}