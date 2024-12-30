#include<stdio.h>
void main()
{
    float unit , bill;
    printf("enter number of unit =");
    scanf("%f",&unit);
    if (unit<=50)
    {
        bill=unit*0.50;
        
    }
    else if (unit<=100)
    {
        bill=25+(unit-50)*0.75;
        
    }
    else if (unit<=250)
    {
        bill=25+75+(unit-150)*1.20;
        
    }
    else if (unit>=250)
    {
        bill=25+75+120+(unit-250)*1.50;
        
    }
    bill=bill+bill*0.20;
    printf("electricity bill= %f",bill);
    
}