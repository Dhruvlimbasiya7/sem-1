#include<stdio.h>
void main()
{
    float percentage, s1,s2,s3,s4,s5;
    printf("only enter marks out of 100 \n");
    printf("enter marks of subject 1(s1)=");
    scanf("%f",&s1);
    printf("enter marks of subject 2(s2)=");
    scanf("%f",&s2);
    printf("enter marks of subject 3(s3)=");
    scanf("%f",&s3);
    printf("enter marks of subject 4(s4)=");
    scanf("%f",&s4);
    printf("enter marks of subject 5(s5)=");
    scanf("%f",&s5);
    percentage=((s1+s2+s3+s4+s5)/500)*100;
    printf("percentage=%f",percentage);
    if(percentage>71)
    {
        printf("distinction grade");
    }
    else if (percentage>61)
    {
        printf("first class grade");
    }
    else if (percentage>46)
    {
        printf("second class grade");
    }
    else if (percentage>36)
    {
        printf("third class grade");
    }
    else if (percentage<35)
    {
        printf("fail");
    }
}