#include <stdio.h>

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int myArray[100],n,i,j;

    printf("enter the number of array you want to create=");
    scanf("%d",&n);

    for ( i = 0; i < n ; i++)
    {
       printf("enter the number=");
       scanf("%d",&myArray[i]);
    }
    

    printArray(myArray, n);
}