#include<stdio.h>
void main()
{
    int i,x,y,result=1;
    printf("enter base(x) :");
    scanf("%d",&x);
    printf("enter exponent(y) :");
    scanf("%d",&y);
    for (i=1;i<=y;i++)
    {
        result *= x;
    }
    printf("x^y=%d",result);
}