//Find last occurrence of a character in a string

#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],c;
    printf("Enter string:\n");
    scanf("%s",s);
    printf("Enter character:\n");
    scanf(" %c",&c);
    int i=strlen(s);
    for(i=i-1;i>=0;i--)
    if(s[i]==c)
    break;

    printf("Position: %d\n",i);
}