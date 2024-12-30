#include<stdio.h>
float largest(float x,float y ,float z)
{
    float largest;
    largest=((x>y)?(x>z?x:z):(y>z?y:z));
    return largest;
}
void main()
{
    float a,b,c;
    
    printf("Enter the first number (a): ");
    scanf("%f", &a);

    printf("Enter the second number (b): ");
    scanf("%f", &b);

    printf("Enter the third number (c): ");
    scanf("%f", &c);

    printf("\nlargest = %f",largest(a,b,c));
}