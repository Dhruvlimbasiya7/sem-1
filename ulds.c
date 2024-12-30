#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);
    if (ch>='A'&& ch<='Z')
    {
        printf("entered ( %c ) character is upper case ",ch);
    }
    else if (ch>='a'&& ch<='z')
    {
        printf("enter (%c) charater is lower case" , ch);
    }
    else if (ch>='0'&& ch<='9')
    {
        printf("enter (%c) charater is digit",ch);
    }
    else
    {
        printf("enter (%c) character is special character",ch);
    }
    
}
