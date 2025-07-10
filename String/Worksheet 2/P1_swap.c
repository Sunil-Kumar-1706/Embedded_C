//Swap the contents of two strings without using any extra temporary string variables. The strings' values should be exchanged.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[] = "hello";
    char b[] = "world";
    int i,l=strlen(a);

    for(i=0;i<l;i++)
    {
        a[i]=a[i]^b[i];
        b[i]=a[i]^b[i];
        a[i]=a[i]^b[i];
    }
    
    printf("a = %s\nb = %s\n",a,b);
}