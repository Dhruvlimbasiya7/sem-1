#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("enter a number(a)=");
    scanf("%d",&a);
    printf("enter a number(b)=");
    scanf("%d",&b);
    printf("what do you want to do with this 2 numbers=");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
            printf("sum=%d",a+b);
            break;
        case '-':
            printf("sub=%d",a-b);
            break;
        case '*':
            printf("multiplication=%d",a*b);
            break;
        case '/':
            printf("division=%d",a/b);
            break;
    }
}