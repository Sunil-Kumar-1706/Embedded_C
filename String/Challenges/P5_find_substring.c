//Find the longest substring without repeating characters

#include <stdio.h>
#include <string.h>

void longestUniqueSubstring(char *str)
{
    int n = strlen(str);
    int lastSeen[256]; 
    for (int i = 0; i < 256; i++)
    {
        lastSeen[i] = -1;
    }

    int start = 0;  
    int maxLength = 0;  
    int startIndex = 0;

    for (int i = 0; i < n; i++)
    {
       
        if (lastSeen[str[i]] >= start) 
        {
            start = lastSeen[str[i]] + 1;
        }

        
        lastSeen[str[i]] = i;

        if (i - start + 1 > maxLength) 
        {
            maxLength = i - start + 1;
            startIndex = start;
        }
    }

  
    for (int i = startIndex; i < startIndex + maxLength; i++) 
    {
        putchar(str[i]);
    }
    printf("\n");
}

int main() 
{
    char s[100];
    printf("Enter the string\n");
    scanf("%[^\n]",s);

    longestUniqueSubstring(s);  
    
}
