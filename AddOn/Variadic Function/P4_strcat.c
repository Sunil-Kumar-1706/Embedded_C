//Write a C program to concatenate a variable number of strings passed as arguments to a function using variadic functions.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>

char* con(int n,...)
{
    int i,len = 0;
    va_list p;
    va_start(p,n);
    for(i=0;i<n;i++)
    {
        char* s = va_arg(p,char*);
        if(s!=NULL)
        len+=strlen(s);
    }
    va_end(p);
    char* r = malloc(len+1);
    r[0] = '\0';
    va_start(p,n);
    for(i=0;i<n;i++)
    {
        char* m = va_arg(p,char*);
        if(m!=NULL)
        strcat(r,m);
    }
    va_end(p);
    return r;
}

int main()
{
    char* res = con(3,"m","s","d");
    printf("%s\n",res);
    free(res);
}