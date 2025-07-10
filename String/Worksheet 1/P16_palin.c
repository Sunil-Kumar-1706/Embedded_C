//Check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter string:\n");
    scanf("%s",s);
    int i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        break;
    }
    if(i==j)
    printf("Palindrome:\n");
    else
    printf("Not Palindrome:\n");
}