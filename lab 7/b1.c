#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a number(a)=");
    scanf("%d",&a);
    printf("enter a number(b)=");
    scanf("%d",&b);
    printf("enter a number(c)=");
    scanf("%d",&c);
    if (a>b)
    {
        printf("a is greater then b");
        printf("\nanswer=%d",a*c);
    }
    else{
        printf("b is greater then a");
        printf("\nanswer=%d",b*c);
    }
}