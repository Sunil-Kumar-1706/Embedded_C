// Find first occurrence of a word in a given string

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[20];
    printf("Enter string:\n");
    scanf("%[^\n]",s1);
    printf("Enter word:\n");
    scanf(" %s",s2);
    char* p = strstr(s1,s2);
    printf("Found at position %d\n",p-s1+1);
}