#include <stdio.h>

int main() {
    FILE *file ,*fp;
    char filename[100];
    char ch;
    int char_count = 0, space_count = 0, tab_count = 0, newline_count = 0;

   fp=fopen("2.txt","w");

    fprintf(fp,"hello world");

    fclose(fp); 

    // Open the file in read mode
    file = fopen("2.txt", "r");
    if (file == NULL) {
        printf("Could not open file %s\n", 2);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        char_count++; // Count every character

        if (ch == ' ') {
            space_count++; // Count spaces
        } else if (ch == '\t') {
            tab_count++; // Count tabs
        } else if (ch == '\n') {
            newline_count++; // Count new lines
        }
    }

    // Close the file
    fclose(file);

    // Output the counts
    printf("Total characters: %d\n", char_count);
    printf("Total spaces: %d\n", space_count);
    printf("Total tabs: %d\n", tab_count);
    printf("Total new lines: %d\n", newline_count);


}