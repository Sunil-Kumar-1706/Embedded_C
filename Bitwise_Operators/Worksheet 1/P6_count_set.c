//Write a C program to count the number of set bits in an unsigned integer.

#include<stdio.h>

void count(int n)
{
    int i,c=0;
    for(i=0;i<32;i++)
    {
        if((n>>i)&1)
        c++;
    } 
    printf("%d Set Bits\n",c);
}

int main()
{
    unsigned int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    count(n);
}