#include <stdio.h>

int main() 
{
    int n, sum = 0, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("1-2+3-4+5-6+...n");
    
    while (i <= n) {
        if (n % 2 == 0) {  
            sum=sum-i;
        } else {  
            sum=sum+i;
        }
        i++;
    }

    
    printf("sum=%d",sum);
}
