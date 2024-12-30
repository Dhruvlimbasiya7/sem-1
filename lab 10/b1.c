#include<stdio.h>
void main ()
{
    int i=1,sum=0,n;
    printf("enter a number=");
    scanf("%d",&n);
    while (i<n)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("sum=%d\n",sum);
    if (sum==n) {
        printf("\n%d is a perfect number.\n", n);
    } else {
        printf("\n%d is not a perfect number.\n", n);
    }
}