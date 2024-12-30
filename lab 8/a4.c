#include<stdio.h>
void main()
{
    int a=1,n,sum=0;
    printf("last number you want=");
    scanf("%d",&n);
    while (a<=n)
    {
        sum=sum+a;
        
        a++;
    }
    printf("%d",sum);
}