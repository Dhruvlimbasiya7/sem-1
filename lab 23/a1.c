#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Define the Student structure
struct Student {
    int roll_number;
    char name[NAME_LENGTH];
    int backlogs;
};

// Function to write student data to a file
void writeStudentsToFile(const char *filename, struct Student students[], int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Unable to open file for writing");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %d\n", students[i].roll_number, students[i].name, students[i].backlogs);
    }

    fclose(file);
}

// Function to read student data from a file and find students with more than 5 backlogs
void findStudentsWithBacklogs(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Unable to open file for reading");
        exit(EXIT_FAILURE);
    }
    
    struct Student student;
    printf("Students with more than 5 backlogs:\n");
    
    while (fscanf(file, "%d %s %d", &student.roll_number, student.name, &student.backlogs) == 3) {
        if (student.backlogs > 5) {
            printf("Roll Number: %d, Name: %s, Backlogs: %d\n", student.roll_number, student.name, student.backlogs);
        }
    }

    fclose(file);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &count);

    // Input student data
    for (int i = 0; i < count; i++) {
        printf("Enter roll number, name and backlogs for student %d: ", i + 1);
        scanf("%d %s %d", &students[i].roll_number, students[i].name, &students[i].backlogs);
    }

    // Write students to file
    writeStudentsToFile("student.txt", students, count);

    // Find and print students with more than 5 backlogs
    findStudentsWithBacklogs("student.txt");

    return 0;
}