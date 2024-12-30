#include<stdio.h>
void main()
{
    int i=1,n,ans;
    printf("enter a number :");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d\n", n*i);
        i++;
    }
}