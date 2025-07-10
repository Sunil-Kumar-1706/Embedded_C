//Remove all extra blank spaces from a given string

#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    int i=0,j;
    for(;s[i];i++)
    {
        if(s[i]==' '&&s[i+1]==' ')
        {
            for(j=i;s[j];j++)
                s[j]=s[j+1];
            i--;   
        }
    }
    printf("%s\n",s);
}