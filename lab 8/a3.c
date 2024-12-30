#include<stdio.h>
void main()
{
    int a,b;
    printf("enter starting number(a)=");
    scanf("%d",&a);
    printf("enter ending number(b)=");
    scanf("%d",&b);
    while (a<b)
    {
        if (a%2==0)
        {
            printf("\n%d",a);
        }
        a++;
    }
    
}