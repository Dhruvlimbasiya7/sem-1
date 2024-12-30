#include<stdio.h>
void main()
{
    int a[100][100],i,j,row,col;

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
    
    for (i = 0; i<row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
