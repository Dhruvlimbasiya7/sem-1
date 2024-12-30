#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);
    (ch>='A'&& ch<='Z')?printf("entered ( %c ) character is upper case ",ch):((ch>='a'&& ch<='z')? printf("enter (%c) charater is lower case" , ch):printf("it is not a alphabet"));