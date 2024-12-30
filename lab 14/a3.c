#include<stdio.h>
void main()
{
    int a[100],odd=0,even =0,i,n;
    printf("enter who many array you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter a number=");
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("odd numbers=%d\neven number=%d",odd,even);
}