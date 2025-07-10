//Remove duplicate characters from a string while preserving order

#include<stdio.h>
#include<string.h>

void remove_repeat(char *s)
{
    int i,j=0;
    int b[140]={0};
    for(i=0;s[i];i++)
    {
        char c=s[i];
        if(!b[c])
        {
            s[j++]=s[i];
            b[c]=1;
        }
    }
    s[j]='\0';
}

int main()
{
    char s[100];
    printf("Enter the string\n");
    scanf("%[^\n]",s);
    remove_repeat(s);
    printf("%s\n",s);
}
