//Check if a string is an interleaving of two other strings, i.e., formed by merging them maintaining order.

#include <stdio.h>
#include <string.h>

int interleav(char s1[], char s2[], char s3[], int i, int j, int k) 
{
    if (s3[k] == '\0') 
    {
        return (s1[i] == '\0' && s2[j] == '\0') ? 1 : 0;
    }

    int result = 0;

    if (s1[i] != '\0' && s1[i] == s3[k]) 
    {
        result = interleav(s1, s2, s3, i + 1, j, k + 1);
    }

    if (!result && s2[j] != '\0' && s2[j] == s3[k]) 
    {
        result = interleav(s1, s2, s3, i, j + 1, k + 1);
    }

    return result;
}

int main() 
{
    char s1[100]="abc", s2[100]="def", s3[200]="adbcef";

    if (strlen(s3) != strlen(s1) + strlen(s2)) 
    printf("False\n");

    else if (interleav(s1, s2, s3, 0, 0, 0))
    printf("True\n");

    else
    printf("False\n");

}
