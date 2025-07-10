//Implement Boyer-Moore pattern searching algorithm with bad character heuristic to search a pattern in a text.

#include <stdio.h>
#include <string.h>

int main() 
{
    char s[50];
    char p[50];
    printf("input: text =");
    scanf("%[^\n]",s);
    printf("pattern =");
    scanf(" %[^\n]",p);

    char *pos = strstr(s,p);
    if (pos != NULL) 
    {
        printf("Pattern found at index %ld\n", pos - s);
    } 
    else 
    {
        printf("Pattern not found\n");
    }
    return 0;
}
