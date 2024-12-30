#include<stdio.h>
void main()
{
    int a[100][100],cp=0,cn=0,i,j,row,col,zero=0;

    printf("enter who many rows you want=");
    scanf("%d",&row);
    printf("enter who many col you want=");
    scanf("%d",&col);

    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter value of a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if (a[i][j]!=0)
            {
                if (a[i][j]>0)
                {
                    cp++;
                }
                else{
                    cn++;
                } 
            }
            else{
                zero++;
            }
        }  
    }
    printf("\n");
    printf("positive numbers=%d\nnegative numbers=%d\nzero=%d",cp,cn,zero);
}
