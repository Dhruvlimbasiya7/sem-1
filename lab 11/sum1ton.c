#include<stdio.h>
void main ()
{
    int i=1,n,sum=0;
    printf("enter last number you want=");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum+=i;
        printf("+%d",i);
    }
    printf("\n");
    printf("sum=%d",sum);
}