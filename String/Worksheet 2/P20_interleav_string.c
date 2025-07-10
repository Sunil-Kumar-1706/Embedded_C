//Print all possible interleavings of two strings, preserving the relative order of characters in each string.

#include<stdio.h>
#include<string.h>

void fun(char res[],char s[],char p[],int i,int j,int k)
{
    if (s[i] == '\0' && p[j] == '\0') 
    {
        res[k] = '\0'; 
        printf("%s\n", res);
        return;
    }

    if (s[i] != '\0')
    {
        res[k] = s[i];
        fun(res, s, p, i + 1, j, k + 1);
    }

    if (p[j] != '\0')
    {
        res[k] = p[j];
        fun(res, s, p, i, j + 1, k + 1);
    }
}

int main()
{
    char a[20]="AB",b[20]="CD";
    int l=strlen(a)+strlen(b);
    char res[l+1];
    fun(res,a,b,0,0,0);
}
