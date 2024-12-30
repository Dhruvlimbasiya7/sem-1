#include<stdio.h>
void main()
{
    int a;
    printf("enter a number (a)=");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("last digit of number enter is even");
    }
    else{
        printf("last digit of number enter is odd");
    }
}