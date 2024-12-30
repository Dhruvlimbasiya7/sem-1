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
    if(a<b && a<c)
	{
		printf("%d is the smallest number.",a);
	}
	else if(b<c)
	{
		printf("%d is the smallest number.",b);
	}
	else
	{
		printf("%d is the smallest number.",c);
	}
}