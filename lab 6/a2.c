#include<stdio.h>
void main()
{
    float da,hra,salary,gsalary;
    printf("enter your salary");
    scanf("%f",&salary);
    if (salary>=30000)
    {
        da=0.95*salary;
        hra=0.30*salary;
    }
    
    else if(salary>=20000)
    {
        da=0.90*salary;
        hra=0.25*salary;
    }
    
    else if(salary>=10000)
    {
        da=0.80*salary;
        hra=0.20*salary;
    }
    gsalary=salary+da+hra;
    printf("gross salary =%f",gsalary);
}