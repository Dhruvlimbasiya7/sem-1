#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter side 1(s1)=");
    scanf("%d",&s1);
    printf("enter side 2(s2)=");
    scanf("%d",&s2);
    printf("enter side 3(s3)=");
    scanf("%d",&s3);
    if (s1==s2&& s2==s3)
    {
        printf("it a equilateral triangle");
    }
    else if (s1==s2||s2==s3||s1==s3)
    {
        printf("it is isosceles triangle");
    }
    else if (s1*s1==s2*s2+s3*s3||s2*s2==s1*s1+s3*s3||s3*s3==s1*s1+s2*s2)
    {
        printf("it is right angle triangle");
    }
    else {
        printf("it is a scalene triangle");
    }  
}