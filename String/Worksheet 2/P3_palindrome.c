//Check whether a given string is a palindrome, i.e., it reads the same forwards and backwards
#include<stdio.h>
#include<string.h>

int main()
{
    char s[20] = "madam";
    int i,j=strlen(s);

    for(i=0,j=j-1;i<j;i++,j--)
    if(s[i]!=s[j])
    break;

    if(i==j)
    printf("Palindrome\n");
    else
    printf("Not a Palindrome\n");
}