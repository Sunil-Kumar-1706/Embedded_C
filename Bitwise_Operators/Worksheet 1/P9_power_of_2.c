//Write a C program to check whether a number is a power of 2 using bitwise operations.

#include<stdio.h>

void check(int n)
{
    int c=0;
    for(int i=0;i<32;i++)
    {
        if(((n>>i)&1)==1)
        c++;
    }
    if(c==1)
    printf("POWER OF 2\n");
    else
    printf("Not a POWER OF 2\n");
}

int main()
{
    int n;
    printf("Enter the Number:\n");
    scanf("%d",&n);

    check(n);
}