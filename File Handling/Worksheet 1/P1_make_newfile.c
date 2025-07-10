//Make a new file and save some text entered by the user.
#include<stdio.h>
int main()
{
    FILE* fp = fopen("test.txt","w");
    char s[100];
    printf("Enter the String...\n");
    scanf(" %[^\n]",s);

    fprintf(fp,"%s\n",s);
}