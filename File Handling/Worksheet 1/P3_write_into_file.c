//Take several lines from the user and write all of them into a file.
#include<stdio.h>
int main()
{
    FILE* fp = fopen("test.txt","w");
    int n,i=0;
    char s[100];
    printf("Enter the number of Lines:\n");
    scanf("%d",&n);

    do
    {
        printf("Enter the string...\n");
        scanf(" %[^\n]",s);
        fprintf(fp,"%s\n",s);
        i++;
    } while(i<n);
    
}