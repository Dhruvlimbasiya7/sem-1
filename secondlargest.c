#include<stdio.h>
void main()
{
    int a,b,c;
     int largest, second_largest;
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    printf("Enter the third number (c): ");
    scanf("%d", &c);
    if (a > b) 
    {
        if (a > c)
        {
            largest = a;
            second_largest = (b > c) ? b : c;
        } 
        else 
        {
            largest = c;
            second_largest = a;
        }
    }
    else 
        {
            if (b > c) 
            {
                largest = b;
                second_largest = (a > c) ? a : c;
            } 
            else 
            {
            largest = c;
            second_largest = b;
            }
        }
        printf("The second largest number is: %d\n", second_largest);
}