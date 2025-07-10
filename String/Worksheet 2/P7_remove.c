//Remove from the first string all characters that appear in the second string.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    int i, j, k = 0;

    for (i = 0; str1[i]; i++) {
        int found = 0;
        for (j = 0; str2[j]; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            str1[k++] = str1[i]; 
        }
    }
    str1[k] = '\0';

    printf("Result: \"%s\"\n", str1);

    return 0;
}