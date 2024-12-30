#include<stdio.h>
void main()
{
    int a,b,c,x,y,z;
    printf("enter a number A=");
    scanf("%d",&a);
    printf("enter a number B=");
    scanf("%d",&b);
    printf("enter a number C=");
    scanf("%d",&c);
    if (a<b && a<c)
    {
        if(b<c)
        {
            x=a;
            y=b;
            z=c;
        }
        else
        {
            x=a;
            y=c;
            z=b;
            }
    }
 
    else if (b<c && b<a)
    {
 
        if (c<a)
        {
            x=b;
            y=c;
            z=a;
        }
     
        else
        {
            x=b;
            y=a;
            z=c;
        }
         
    }
     
    else if (c<a && c<b)
    {
 
        if (b<a)
        {
            x=c;
            y=b;
            z=a;
        }
     
        else
        {
            x=c;
            y=a;
            z=b;
        }
         
    }
    printf("ascending=%d %d %d",x,y,z);
    printf("\ndecending=%d %d %d",z,y,x);
} 
    