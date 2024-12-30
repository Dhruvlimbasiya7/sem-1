#include<stdio.h>
void main ()
{
    int i=1,c=0;
    while (i)
    {
        if (c<=50)
        {
            printf("%d,",i);
        }
        c++;
        i=i+3;
    }
    
}