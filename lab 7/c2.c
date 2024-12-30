#include<stdio.h>
void main()
{
    int a;
    printf("enter the number of month=");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("month=January");
        printf("\n days=31");
        break;
    case 2:
        printf("month=february");
        printf("\n days=29");
        break;
    case 3:
        printf("month=march");
        printf("\n days=31");
        break;
    case 4:
        printf("month=april");
        printf("\n days=30");
        break;
    case 5:
        printf("month=may");
        printf("\n days=31");
        break;
    case 6:
        printf("month=june");
        printf("\n days=30");
        break;
    case 7:
        printf("month=july");
        printf("\n days=31");
        break;
    case 8:
        printf("month=august");
        printf("\n days=31");
        break;
    case 9:
        printf("month=september");
        printf("\n days=30");
        break;
    case 10:
        printf("month=october");
        printf("\n days=31");
        break;
    case 11:
        printf("month=november");
        printf("\n days=30");
        break;
    case 12:
        printf("month=december");
        printf("\n days=31");
        break;
    default:
        printf("invalid input");
        break;
    }
}