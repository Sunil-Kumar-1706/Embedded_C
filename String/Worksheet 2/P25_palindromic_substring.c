//Find the longest palindromic substring inside a given string.

#include <stdio.h>
#include <string.h>

int isPalindrome(char s[], int i, int j) 
{
    while (i < j) {
        if (s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main() 
{
    char s[50];
    printf("Input: ");
    scanf("%s", s);

    int maxLen = 0, start = 0;
    int i,j,len = strlen(s);

    for (i = 0; i < len; i++)
    {
        for ( j = i; j < len; j++)
         {
            if (isPalindrome(s, i, j) && (j - i + 1 > maxLen)) 
            {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }

    printf("output: ");
    for (int i = start; i < start + maxLen; i++) 
    {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}
