#include<stdio.h>
int main() 
{
  
    int n,i;
    int searchKey,found=0;

    printf("enter who many array you want=");
    scanf("%d",&n);
    
    int a[n] ;

    for (i=0;i<n;i++)
    {
        printf("enter value of a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("enter search element=");
    scanf("%d",&searchKey);

    for( i=0; i<n; i++) 
    {
        if(a[i] == searchKey)
        {
            found=1;
            printf("Element found at index %d", i);
            break;
            
        }
    }
    if(found==0)
    {
        printf("Element not found");
    }
}
