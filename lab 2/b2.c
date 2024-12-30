#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a number A=");
    scanf("%d",&a);
    printf("enter a number B=");
    scanf("%d",&b);
    printf("enter a number c=");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf(" %d is largest",a);
        }
        
        else
            {
                printf("%d is largest",c);  
            }
            
        
    }
    else{
        if(b>c)
        {
            printf("%d is largest",b);
        }
        else{
            printf("%d is largest",c);
        }
    }
}