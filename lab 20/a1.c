#include <stdio.h>
#include<string.h>
int main() {
    char str[100]; // Array to store the input string
    int i, length = 0, isPalindrome = 1; // Variables for length and flag

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string

    // Calculate the length of the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') { // Remove newline character if present
            str[i] = '\0';
            break;
        }
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // Set flag to 0 if mismatch found
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

}