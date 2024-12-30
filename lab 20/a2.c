#include <stdio.h>
#include <ctype.h> // For isalnum function
#include <string.h> // For strlen function

void removeSpacesAndSpecialChars(char *str) 
{
    char *ptr = str;  // Pointer to traverse the original string
    char *result = str; // Pointer to build the new string

    while (*ptr) {
        // Check if the character is alphanumeric
        if (isalnum((unsigned char)*ptr)) 
        {
            *result++ = *ptr; // If it is, copy it to the result
        }
        ptr++; // Move to the next character
    }
    *result = '\0'; // Null-terminate the new string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line of text

    // Remove newline character from fgets if present
    str[strcspn(str, "\n")] = '\0';

    removeSpacesAndSpecialChars(str);
    
    printf("String after removing spaces and special characters: %s\n", str);


}