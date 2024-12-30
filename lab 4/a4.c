#include<stdio.h>
void main()
{
    int a,b,c;
    float average;
    printf("enter number(a)=");
    scanf("%d",&a);
    printf("enter number(b)=");
    scanf("%d",&b);
    printf("enter number(c)=");
    scanf("%d",&c);
    average = (a+b+c)/3.0;
    printf("average of 3 numbers= %f",average);
}