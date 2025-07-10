// Count total number of words in a string

#include<stdio.h>
int main()
{
    char s[20];
    printf("Enter string:\n");
    scanf("%[^\n]",s);
    int i,c=1;
    for(i=0;s[i];i++)
    if(s[i]==' ')
    c++;

    printf("%d\n",c);
}