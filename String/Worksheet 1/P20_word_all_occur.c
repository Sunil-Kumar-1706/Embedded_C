//Find all occurrences of a word in given string

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],c[20];
    printf("Enter string:\n");
    scanf("%[^\n]",s);
    printf("Enter word:\n");
    scanf(" %s",c);
    
    char* p = strtok(s," ");
    while(p)
    {
        if(strcmp(p,c)==0)
        printf(" %d ",p-s);
        p = strtok(NULL," ");
    }
}