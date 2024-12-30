#include<stdio.h>
void main()
{
    int days,y,m,d;

    printf("Enter number of days= ");
    scanf("%d",&days);

    y=(days)/365;
    m=(days-y*365)/30;
    d=(days-y*365-m*30);
    
    printf("Years = %d",y);
    printf("\nMonths = %d",m);
    printf("\nDays = %d",d);
}