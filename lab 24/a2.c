#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *numbers, sum = 0.0;

    // Prompt the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n numbers
    numbers = (float *)malloc(n * sizeof(float));
    
    // Check if memory allocation was successful
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error code
    }

    // Read the numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Calculate the sum of the numbers
    for (i = 0; i < n; i++) {
        sum += numbers[i];
    }

    // Print the result
    printf("The sum of the entered numbers is: %.2f\n", sum);

    // Free the allocated memory
    free(numbers);

}