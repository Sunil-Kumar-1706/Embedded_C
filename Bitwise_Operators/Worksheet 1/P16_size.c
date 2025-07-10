//Write a program to determine the size (in bits) of an integer using bit shifts.

#include<stdio.h>

void size(unsigned int n)
{
    int c=1;
    for(;n!=0;)
    {
        n = n<<1;
        c++;
    }
    printf("%d Bits\n",c);
}

int main()
{
    unsigned int n = 2;
    size(n);
}