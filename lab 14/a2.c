#include<stdio.h>
void main()
{
    int a[100],cp=0,cn=0,i,n,c=0;
    printf("enter who many array you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter a number=");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]!=0)
        {
            if (a[i]>0)
            {
                cp++;
            }
            else{
                cn++;
            } 
        }
        else{
            c++;
        }  
    }
    printf("positive numbers=%d\nnegative numbers=%d\nzero=%d",cp,cn,c);
}