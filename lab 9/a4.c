#include<stdio.h>
void main()
{
    int num,factorial=1,i=1;
    printf("enter integer :");
    scanf("%d",&num);
    while(i<=num)
    {
        factorial=factorial*i;
        i++;
    }
    printf("%d\n",factorial);
}