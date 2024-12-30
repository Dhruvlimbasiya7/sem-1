#include<stdio.h>
void main()
{
    int i=1,x,y,result=1;
    printf("enter base(x) :");
    scanf("%d",&x);
    printf("enter exponent(y) :");
    scanf("%d",&y);
    while(i<=y)
    {
        result *= x;
        i++;
    }
    printf("%d",result);
}