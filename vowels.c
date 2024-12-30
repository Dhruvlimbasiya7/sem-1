#include<stdio.h>
void main()
{
    char ch;
    printf("enter a alfhabet=");
    scanf(" %c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("it is a vowel");
    }
    else{
        printf("it is consonant");
    }
}