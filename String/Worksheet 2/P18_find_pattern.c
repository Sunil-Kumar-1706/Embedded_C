//Implement Rabin-Karp algorithm using hashing to find patterns in a text efficiently.
#include<stdio.h>
#include<string.h>

void pattern(char a[],char b[])
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
            printf("Pattern found at index %d\n",i);
        }
    }
}

int main()
{
    char s[] = "abcxabcdabcdabcy";
    char p[] = "abcdabcy";
    
    pattern(s,p);
}