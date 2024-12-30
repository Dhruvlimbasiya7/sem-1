#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[100];
    float percentage;
    int age;
};

int main() {
    struct Student students[5]; // Array of structures
    int i;

    // Read data for 5 students
    for (i = 0; i < 5; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("\n");
    }

    // Display the data of the students
    printf("Details of students:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

}