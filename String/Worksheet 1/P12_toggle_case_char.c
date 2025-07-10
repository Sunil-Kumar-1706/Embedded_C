//Toggle case of each character of a string

#include<stdio.h>
int main()
{
    char s[20];
    printf("Enter string:\n");
    scanf("%s",s);
    int i;
    for(i=0;s[i];i++)
        s[i] = s[i]^32;

    printf("%s\n",s);
}