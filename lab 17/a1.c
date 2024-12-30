#include<stdio.h>
void main ()
{
    int a=2;
    int *p=&a;
    printf("%d\n",*p);
    printf("%d",p);
}