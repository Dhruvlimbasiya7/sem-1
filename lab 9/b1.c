#include <stdio.h>
void main() 
{
    char uppercase = 'A';
    char lowercase = 'a';

    printf("uppercase alphabets: ");
    while (uppercase <= 'Z') 
    {
        printf("%c ", uppercase);
        uppercase++;
    }
    printf("\n");

    printf("lowercase alphabets: ");
    while (lowercase <= 'z') 
    {
        printf("%c ", lowercase);
        lowercase++;
    }
    printf("\n");
}