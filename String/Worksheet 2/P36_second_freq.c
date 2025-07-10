//Find the character with the second highest frequency in a string.

#include<stdio.h>

void freq(char *a)
{
    int i,f[256]={0};
    for(i=0;a[i];i++)
    {
        f[a[i]]++;
    }

    int b1,b2;
    if(f[0]>f[1])
    {
        b1=f[0];
        b2=f[1];
    }
    else
    {
        b1=f[1];
        b2=f[0];
    }
    for(i=2;i<256;i++)
    {
        if(f[i] > b1)
        {
            b2 = b1;
            b1 = f[i];
        }
        else if( (f[i] > b2)&&(f[i]!=b1) )
            b2 = f[i];
    }
    for(i=0;i<256;i++)
    if(f[i]==b2)
    printf("%c\n",i);
}

int main()
{
    char s[100];
    printf("Enter the string\n");
    scanf("%s",s);
    freq(s);
}
