#include <stdio.h>
#include <string.h>

// Function to replace a character in a string
void replaceCharacter(char *str, char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar; // Replace oldChar with newChar
        }
    }
}

int main() {
    char str[100];
    char oldChar, newChar;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s",str);
    
    

    // Input characters to be replaced
    printf("Enter the character to be replaced: ");
    scanf(" %c", &oldChar);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    // Replace the character in the string
    replaceCharacter(str, oldChar, newChar);

    // Output the modified string
    printf("Modified string: %s\n", str);

}