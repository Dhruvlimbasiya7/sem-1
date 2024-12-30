#include<stdio.h>
void main()
{

	float a=5.7 ;
	float *p=&a;
	// p=&a;
	
	printf("%f\n",*p);
	printf("%d\n",p);
	
	
	int b=5 ;
	int *po=&b;
	// po=&b;
	
	printf("%d\n",*po);
	printf("%d\n",po);
	
	char c='%';
	char *poi = &c;
	// poi=&c;
	
	printf("%c\n",*poi);
	printf("%d\n",poi);
}
