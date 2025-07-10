//Implement naive pattern searching to find all occurrences of a pattern in a text.
#include<stdio.h>
#include<string.h>

void fun(char a[],char b[])
{
    int x=strlen(a),y=strlen(b),i,j;
    
    for(i=0;i<=x-y;i++)
    {
        for(j=0;j<y;j++)
        {
            if(a[i+j]!=b[j])
            break;
        }
        if(j==y)
        {
            printf("Pattern Found at index %d\n",i);
        }
    }
}

int main()
{
    char a[] = "hello world";
    char pattern[] = "lo";

    fun(a,pattern);
}