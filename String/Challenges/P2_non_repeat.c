//Find the first non-repeating character in a given string

#include<stdio.h>

void fun(char *s)
{
    int i,freq[256]={0};
    for(i=0;s[i];i++)
        freq[s[i]]++;
    for(i=0;s[i];i++)
    {
        if(freq[s[i]]==1)
        {
            printf("'%c'\n",s[i]);
            break;
        }
    }
}

int main()
{
    char s[100];
    printf("Enter the string\n");
    scanf("%[^\n]",s);
    fun(s);
}
