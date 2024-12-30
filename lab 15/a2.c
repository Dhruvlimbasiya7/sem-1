#include<stdio.h>
void main()
{
    int a[100],i,n,neg=0;
    printf("enter who many array you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter value of a[i]=",i);
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            neg++;
        }
    }
    printf("total negative value=%d",neg);
}