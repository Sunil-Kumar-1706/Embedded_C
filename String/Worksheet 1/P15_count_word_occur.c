//Count occurrences of a word in a given string

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[20];
    printf("Enter string:\n");
    scanf("%[^\n]",s1);
    printf("Enter word:\n");
    scanf(" %s",s2);
    int c=0;
    char* p = strtok(s1," ");
    while(p)
    {
        if(strcmp(p,s2)==0)
        c++;
        p = strtok(NULL," ");
    }
    printf("%d\n",c);
}