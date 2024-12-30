#include<stdio.h>
#include<string.h> 
void main()
{
    
    char str[10];
    int len;
    printf("Enter a String:");
   gets(str);
   len=strlen(str);
   printf("Length of String=%d",len);
}