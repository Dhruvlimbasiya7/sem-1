#include<stdio.h>
void main()
{
    int a[100],b[100],i,n;
    printf("enter who many array you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter value of a[i]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("b[%d]=%d",i,b[i]);
    }
}