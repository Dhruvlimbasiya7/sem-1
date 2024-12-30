#include <stdio.h>
int findCharacter(const char *str, char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i; // Return the index if the character is found
        }
    }
    return -1; // Return -1 if the character is not found
}

int main() {
    char str[100];
    char ch;

    // Input the string
    printf("Enter a string: ");
    scanf("%s",str);

    // Input the character to find
    printf("Enter a character to find: ");
    scanf(" %c", &ch); 
    
    int index = findCharacter(str, ch);

    // Output the result
    if (index != -1) {
        printf("Character '%c' found at index %d.\n", ch, index);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

}