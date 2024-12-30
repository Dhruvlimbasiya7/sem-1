#include <stdio.h>
void main()
{
    int num, digit, count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) 
    {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    printf("Frequency of each digit:\n");
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > 0) {
            printf("Digit %d: %d\n", i, count[i]);
        }
    }
}