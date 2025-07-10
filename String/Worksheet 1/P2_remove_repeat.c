//Remove all repeated characters from the given string
#include<stdio.h>
int main()
{
    char s[20]="programming";
    int i,j,k;
    for(i=0;s[i];i++)
    {
        for(j=0;j<i;j++)
        if(s[j]==s[i])break;

        if(i!=j)
        {
            for(k=i;s[k];k++)
            {
                s[k]=s[k+1];
            }
        }
    }
    printf("%s\n",s);
}