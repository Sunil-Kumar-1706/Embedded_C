//Trim both leading and trailing white space characters from given string

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter string:\n");
    scanf("%[^\n]",s);
    int i,j;
    for(i=0;s[i];i++)
    {
        if((i==0)||(i==strlen(s)-1))
        {
            if(s[i]==' ')
            for(j=i;s[j];j++)
            s[j]=s[j+1];
        }
    }
    printf("%s\n",s);
}