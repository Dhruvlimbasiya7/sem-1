#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("enter how many array you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter a number=");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\n");
    for (i=n-1;i>=0;i--)    
    {
        printf("%d,",a[i]);
    }
}