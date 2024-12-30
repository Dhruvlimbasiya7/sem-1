#include<stdio.h>
void main(){
	int n,j,i,a[100];
	
	printf("enter number of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	
			
				printf("enter array:");
				scanf("%d",&a[i]);
		
	}

	for(i=0;i<n;i++){
	    int *p=&a[i];
		printf("%d\n",*p);
	}
}
