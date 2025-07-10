//Remove last occurrence of a character from string

#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],ch;
    printf("Enter string:\n");
    scanf("%s",s);
    printf("Enter character:\n");
    scanf(" %c",&ch);
    int i=strlen(s),j;
    for(i=i-1;i>=0;i--)
    {
        if(s[i]==ch)
        {
            for(j=i;s[j];j++)
            s[j]=s[j+1];
        }
    }
    printf("%s\n",s);   
}