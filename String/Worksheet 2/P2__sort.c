//Sort an array of strings in alphabetical order. The sorted array should list strings from A to Z.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][20]={"John", "Alice", "Bob"},temp[20];
    int i,j;

    for(i=0;i<3-1;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    printf("After Sorting:\n");
    for(i=0;i<3;i++)
    printf("%s ",s[i]);
}