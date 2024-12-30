#include<stdio.h>
void main()
{
	int a,b,sum;
	
	printf("enter number a:");
	scanf("%d",&a);
	
	printf("enter number b:");
	scanf("%d",&b);
	
	int *p=&a;
	int *ptr=&b;
	sum=*p+*ptr;
	
	printf("sum is=%d",sum);
}
