#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Define a structure
struct student {
    char name[50];
    int age;
};

int main() {
    // Dynamically allocate memory for a structure variable
    struct student *p = (struct student *)malloc(sizeof(struct student));
    
    // Check if the memory allocation was successful
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit the program if allocation fails
    }

    // Use the structure
    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin); // Read name
    printf("Enter age: ");
    scanf("%d", &p->age); // Read age

    // Display the information
    printf("Name: %s", p->name);
    printf("Age: %d\n", p->age);

    // Free the allocated memory
    free(p);
    
}