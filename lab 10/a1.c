#include<stdio.h>
void main ()
{
    int i,sum=0,first_digit,last_digit ,temp;
    printf("enter a number=");
    scanf("%d",&i);
    temp = i;
    last_digit= i%10;
    while (i>10)
    {
        i=i/10;
    }
    first_digit=i;
    sum=first_digit+last_digit;
    printf("number enter=%d",temp);
    printf("\nsum of first digit and last digit=%d",sum);
}