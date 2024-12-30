#include<stdio.h>
#include<string.h>
void compare( char a[], char b[])
{
    
    // compare
    int c ;
    
    c=strcmp(a,b);
     
    if(c==0)
    {
        printf("strings are equal\n");
    }
    else
    {
        printf("strings are not equal\n");
    }
    
}

void copy(char a[], char b[])
{
    // copy
    char temp[100];
    printf("copy = %s \n",strcpy(temp,b));
}

void strcat2(char a[], char b[])
{
    // add
    printf("add=%s\n",strcat(a,b));
}

void upper(char a[],char b[])
{
    //upper
    printf("upper = %s (a) \n upper = %s (b)\n", strupr(a),strupr(b));
}

void lower(char a[],char b[])
{
    //lower
    printf("lower = %s (a) \n lower = %s (b)\n", strlwr(a),strlwr(b));
}

void reverse(char a[],char b[])
{
    //reverse
    printf("reverse=%s (a) \n reverse = %s (b)\n", strrev(a),strrev(b));
}

void length(char a[],char b[])
{
    // length
    printf("length=%d(a) \n length= %d(b)\n",strlen(a),strlen(b));
}

void main()
{
    char str1[]="Hello" , str2[]="World";

    compare(str1,str2);
    upper(str1,str2);
    copy(str1,str2);
    lower(str1,str2);
    reverse(str1,str2);
    length(str1,str2);
    strcat2(str1 , str2);  

}