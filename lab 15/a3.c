#include<stdio.h>
void main()
{
    int a[100],i,n,count=0;
    printf("enter who many array you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter value of a[i]=",i);
        scanf("%d",&a[i]);
        if(a[i]%3==0)
        {
            count++;
        }
    }
    printf("total number divisible with 3=%d",count);
}