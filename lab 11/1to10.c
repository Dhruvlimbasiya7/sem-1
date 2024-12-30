#include<stdio.h>
void main ()
{
    int i=1,n;
    printf("enter last number you want=");
    scanf("%d",&n);

    for (i=1;i<=10;i++)
    {
        printf("%d,",i);
    }
    printf("\n");
    for (i=1;i<=n;i++)
    {
        printf("%d,",i);
    }
}