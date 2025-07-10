//Print the reverse of a string using recursion

#include<stdio.h>
#include<string.h>

void rev(char *a,char *b)
{
    char c;
    if(a>b)
    return;
    c=*a;
    *a=*b;
    *b=c;
    rev(a+1,b-1);
}

int main()
{
    char s[100]="hello";
    rev(s,s+(strlen(s)-1));
    printf("After Reversing:  %s\n",s);
}