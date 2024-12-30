#include<stdio.h>
#include<string.h>
struct employee
{
    char name[100];
    int employee_number ;
    float LPA ;
    
};

void main()
{
    struct employee emp1;
    emp1.employee_number = 1234 ;
    strcpy(emp1.name,"John");
    emp1.LPA = 50000.0 ;
    printf("Employee Name: %s\n",emp1.name);
    printf("Employee Number: %d\n",emp1.employee_number);
    printf("Employee LPA : %f\n",emp1.LPA);
}
