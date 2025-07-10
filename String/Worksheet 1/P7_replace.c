//Replace all occurrences of a character with another in a string
#include<stdio.h>
int main()
{
    char s[20],c,r;
    int i;
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    printf("Enter the character which should be replaced:\n");
    scanf(" %c",&c);
    printf("Enter the character which you want to replace with:\n");
    scanf(" %c",&r);

    for(i=0;s[i];i++)
    {
        if(s[i]==c)
        s[i]=r;
    }
    printf("%s\n",s);
}