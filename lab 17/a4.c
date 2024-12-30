#include<stdio.h>
void main(){
	int a,b;
	printf("enter number a:");
	scanf("%d",&a);
	
	printf("enter number b:");
	scanf("%d",&b);
	
	int *p=&a;
	int *ptr=&b;

	printf("a is=%d\n",*ptr);
	printf("b is=%d\n",*p);

    // a=*ptr;
    // b=*p;
    *p = *p + *ptr; 
    *ptr = *p - *ptr; 
    *p = *p - *ptr;

    printf("new a =%d\n",*p);
    printf("new b =%d",*ptr);

}
