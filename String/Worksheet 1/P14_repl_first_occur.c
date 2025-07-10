//Replace first occurrence of a character with another in a string

#include<stdio.h>
int main()
{
    char s[20],c,r;
    printf("Enter String:\n");
    scanf("%[^\n]",s);
    printf("Enter character to be replaced:\n");
    scanf(" %c",&c);
    printf("Enter replacement character:\n");
    scanf(" %c",&r);
    int i=0;
    for(;s[i];i++)
    {
        if(s[i]==c)
        {
            s[i]=r;
            break;
        }
    }
    printf("%s\n",s);
}