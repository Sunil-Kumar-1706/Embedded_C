//Reverse a string in-place without using extra memory

#include<stdio.h>
#include<string.h>

void reverse(char *s)
{
    char c,i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        s[i]=s[i]+s[j];
        s[j]=s[i]-s[j];
        s[i]=s[i]-s[j];
    }
}

int main()
{
    char s[100];
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    reverse(s);
    printf("%s\n",s);
}