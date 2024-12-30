#include<stdio.h>
void main()
{
    int h[5],w[5],i,count=0;
    for (i=0;i<5;i++)
    {
        printf("enter your height(cm)=");
        scanf("%d",&h[i]);
        printf("enter your weight(kg)=");
        scanf("%d",&w[i]);
        if (h[i]>170 && w[i]>50)
        {
            count++;
        } 
    }
    printf("number of person with weight(>50) and height(>170)=%d",count);
}