#include<stdio.h>
void main()
{
    int a,b,c,largest;
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    printf("Enter the third number (c): ");
    scanf("%d", &c);
    largest=((a>b)?(a>c?a:c):(b>c?b:c));
    printf("\n largest number from three is %d",largest);
}