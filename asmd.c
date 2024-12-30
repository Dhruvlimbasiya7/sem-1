#include<stdio.h>
void main()
{
    float a,b,ans;
    char ch,temp;
    printf("enter a number A=");
    scanf("%f",&a);
    printf("enter a number B=");
    scanf("%f",&b);
    scanf("%c",&temp);

    printf("entr a character(+,-,*,/)=");
    scanf("%c",&ch);

    if ( ch=='+')
    {
        ans=a+b;
        printf("answer(a+b)=%f",ans);
    }
    else if ( ch=='-')
    {
        ans=a-b;
        printf("answer(a-b)=%f",ans);
    }
    else if ( ch=='*')
    {
        ans=a*b;
        printf("answer(a*b)=%f",ans);
    }
    else if ( ch=='/')
    {
        ans=a/b;
        printf("answer(a/b)=%f",ans);
    }
    else{
        printf("enter valid function");
    }
}