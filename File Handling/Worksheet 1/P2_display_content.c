//Open an existing file and display its contents on the screen.
#include<stdio.h>
int main()
{
    FILE* fp = fopen("test.txt","r");
    char ch;
    while((ch=fgetc(fp))!=EOF)
    printf("%c",ch);
}