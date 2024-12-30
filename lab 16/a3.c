#include <stdio.h>
void main() 
{
    int students[20][2];
    int i;

    for (i = 0; i < 20; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i][0]); 
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &students[i][1]); 
    }

    printf("\nRoll No and Marks of Students:\n");
    printf("Roll No\tMarks\n");
    for (i = 0; i < 20; i++) {
        printf("%d\t%d\n", students[i][0], students[i][1]);
    }

}
