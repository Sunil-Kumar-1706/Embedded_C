//Check if one string is a rotation of another, i.e., one string can be shifted to get the other.

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int check(const char *s1, const char *s2) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char *c= (char *)malloc(2 * len1 + 1);
    if (!c) 
        return 0;

    strcpy(c, s1);
    strcat(c, s1);

    int x = strstr(c, s2) != NULL;

    free(c); 
    return x;
}

int main()
{
    char a[100]="abcd",b[100]="cdab";
    if(strlen(a)==strlen(b))
    {
        int n=check(a,b);
        if(n==1)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    else
        printf("String length doesn't match\n");
}