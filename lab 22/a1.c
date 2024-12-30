#include<stdio.h>
void main ()
{
    FILE *fp;

    fp=fopen("1.txt","w");

    fprintf(fp,"hello wold");

    fclose(fp);
}