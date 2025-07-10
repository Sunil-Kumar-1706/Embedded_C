//Check if two strings are anagrams of each other by comparing character counts.

#include<stdio.h>
#include<string.h>

void fun(char s[],char p[])
{
    if(strlen(s)!=strlen(p))
    {
        printf("false\n");
        return;
    }

    int a[256]={0};
    int b[256]={0};
    int i;
    for(i=0;s[i];i++)
    {
        a[(unsigned char)s[i]]++;
        b[(unsigned char)p[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(a[i]!=b[i])
        {
            printf("false\n");
            return;
        }
    }
    printf("true\n");      
}

int main()
{
    char s[50],p[50];
    printf("input : ");
    scanf("%s",s);
    scanf(" %s",p);
    fun(s,p);
}
