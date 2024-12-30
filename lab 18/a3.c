#include<stdio.h>
int simple_interest(int x,int y,int z)
{
    int si;
    si=(x*y*z)/100;
    return si;

}
void main()
{
  float p,y,r,si;

    printf("enter principle amount(p)=");
    scanf("%f",&p);
    printf("enter rate(r)=");
    scanf("%f",&r);
    printf("enter number of years(y)=");
    scanf("%f",&y);

    printf("simple interest = %d",simple_interest(p,r,y));
}