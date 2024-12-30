#include<stdio.h>
void main()
{
    float p,y,r,si;
    printf("enter principle amount(p)=");
    scanf("%f",&p);
    printf("enter rate(r)=");
    scanf("%f",&r);
    printf("enter number of years(y)=");
    scanf("%f",&y);
    si=(p*r*y)/100;
    printf("simple interest=%f",si);
}