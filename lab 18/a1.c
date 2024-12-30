#include<stdio.h>
int addition(int x , int y)
{
    int c;
    c=x+y;
    return c;
}
void main()
{
    int a,b,ans;
    printf("enter A=");
    scanf("%d",&a);

    printf("enter B=");
    scanf("%d",&b);

    ans=addition(a,b);

    printf("answer=%d",ans);
}