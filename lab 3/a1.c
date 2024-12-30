#include <stdio.h>

int main() {
    int dayNumber;

    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &dayNumber);

    if (dayNumber == 1) 
    {
        printf("The day is: Sunday\n");
    } 
    else if (dayNumber == 2) 
    {
        printf("The day is: Monday\n");
    } 
    else if (dayNumber == 3) 
    {
        printf("The day is: Tuesday\n");
    } 
    else if (dayNumber == 4) 
    {
        printf("The day is: Wednesday\n");
    } 
    else if (dayNumber == 5) 
    {
        printf("The day is: Thursday\n");
    } 
    else if (dayNumber == 6) 
    {
        printf("The day is: Friday\n");
    } 
    else if (dayNumber == 7) 
    {
        printf("The day is: Saturday\n");
    } 
    else 
    {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
}