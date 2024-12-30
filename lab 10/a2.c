a#include<stdio.h>
void main()
{
    int i=1,sum=0,n,a,avg;
    printf("how many number you want=");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("enter a number=");
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    avg=sum/n;
    printf("sum=%d",sum);
    printf("\naverage=%d",avg);
}