#include<stdio.h>
void main()
{
    int a[100],i,n,max,min;
    float avg,sum=0;
    printf("enter who many array you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter a number=");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    max=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
    min=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("sum of numbers=%f\n",sum);
    printf("average of number=%f\n",avg);
    printf("max=%d\n",max);
    printf("min=%d",min);
}