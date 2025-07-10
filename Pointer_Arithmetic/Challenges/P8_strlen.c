//Implement your own version of strlen() using only pointer arithmetic and no index or library functions.
#include<stdio.h>
int my_strlen(char* s)
{
    int i;
    for(i=0;*s!='\0';s++,i++);
    return i;
}
int main()
{
    char s[20] = "SUNIL";
    printf("Length of the string: %d\n",my_strlen(s));
}