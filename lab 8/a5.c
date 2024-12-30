#include<stdio.h>
void main()
{
    int a=1,ce=0,co=0,n,zero=0;
    while (a<11)
    {
        scanf("%d",&n);
        if (n!=0)
        {
            if (n%2==0)
            {
                ce++;
            }
            else{
                co++;
            }
        }
        else{
            zero++;
        }  
        a++;
    }
    printf("%d odd\n",co);
    printf("%d even \n",ce);
    printf("\nzero=%d",zero);
}