#include<stdio.h>
#include<time.h>
int main()
{
    time_t currenttime;
    time(&currenttime);
    char*timestring=ctime(&currenttime);
    printf("%s",timestring);
}