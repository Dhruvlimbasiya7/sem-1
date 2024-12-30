#include<stdio.h>
int max(int x,int y)
{
    int c;
    if (x>y)
    {
        c=x;
    }
    else{
        c=y;
    }
    return c ;
    
}
int min(int x,int y)
{
    int c;
    if(x<y)
    {
        c=x;
    }
    else{
        c=y;
    }
}
void main()
{
    int a,b;
    printf("enter A=");
    scanf("%d",&a);

    printf("enter B=");
    scanf("%d",&b);

    printf("maximum=%d",max(a,b));
    printf("\nminimum=%d",min(a,b));
}