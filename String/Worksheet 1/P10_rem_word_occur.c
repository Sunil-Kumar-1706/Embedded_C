// Remove all occurrence of a word in given string

#include<stdio.h>
#include<string.h>
void rem(char* a,char* b)
{
    int i=0,j=0,l=strlen(b);
    char* p = strstr(a,b);
    if(p == NULL)
    return;

    for(;i<l;i++)
    {
        for(j=p-a;a[j];j++)
        a[j]=a[j+1];
    }
    rem(a,b);
}
int main()
{
    char s1[100],s2[20];
    printf("Enter string:\n");
    scanf("%[^\n]",s1);
    printf("Enter word:\n");
    scanf(" %s",s2);
    rem(s1,s2);
    printf("%s\n",s1);
}