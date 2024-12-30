#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an int
    int *intPtr = (int *)malloc(sizeof(int));
    if (intPtr == NULL) {
        fprintf(stderr, "Memory allocation failed for int.\n");
        return 1;
    }

    // Allocate memory for a char
    char *charPtr = (char *)malloc(sizeof(char));
    if (charPtr == NULL) {
        fprintf(stderr, "Memory allocation failed for char.\n");
        free(intPtr); // Free previously allocated memory
        return 1;
    }

    // Allocate memory for a float
    float *floatPtr = (float *)malloc(sizeof(float));
    if (floatPtr == NULL) {
        fprintf(stderr, "Memory allocation failed for float.\n");
        free(intPtr); // Free previously allocated memory
        free(charPtr); // Free previously allocated memory
        return 1;
    }

    // Assign values
    *intPtr = 42;
    *charPtr = 'A';
    *floatPtr = 3.14f;

    // Print the values
    printf("Integer value: %d\n", *intPtr);
    printf("Character value: %c\n", *charPtr);
    printf("Float value: %.2f\n", *floatPtr);

    // Deallocate memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);

    printf("memory deallocated successfully");
}