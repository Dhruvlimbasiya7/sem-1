#include<stdio.h>
#include<math.h>
void main()
{
    float x ,a,b,c,d,root1,root2;
    printf("enter only positive number\n");
    printf("enter (a) =");
    scanf("%f",&a);

    printf("enter (b) =");
    scanf("%f",&b);

    printf("enter (c) =");
    scanf("%f",&c);

    ("expression =%fx*x+%f*x+%f",a,b,c);

    d=(b*b)-4*a*c;
    printf("\n%f",d);
    if (d<=0)
    {
        printf("\nroots are imaginary");
    }
    else
    {
        root1=(-b + sqrt((b*b)-4*a*c))/2*a;
        printf("\nroot is %f",root1);
        root2=(-b - sqrt((b*b)-4*a*c))/2*a;
        printf("\nroot is %f",root2);
    }
    


}