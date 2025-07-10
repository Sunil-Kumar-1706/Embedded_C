//Program: Reverse a string without using library functions
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20] = "SUNIL",temp;
    int i=0,j=strlen(s);
    for(j=j-1;i<j;i++,j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("%s\n",s);
}