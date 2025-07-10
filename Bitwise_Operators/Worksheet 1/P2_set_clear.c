/*
Write a program to perform the following operations on the Least and Most Significant Bits (LSB/MSB) of a given integer:
Set the LSB to 1
Clear the LSB (set to 0)
Toggle the LSB
Set the MSB to 1
Clear the MSB (set to 0)
Toggle the MSB
Set a specific bit to 1
Clear a specific bit
Toggle a specific bit
*/

#include<stdio.h>

void set(int* s,int p)
{
    *s|=(1<<p);
}

void clear(int* s,int p)
{
    *s=*s&~(1<<p);
}

void toggle(int* s,int p)
{
    *s^=(1<<p);
}

void bin_print(int n)
{
    for(int i=31;i>=0;i--)
    printf("%d ",(n>>i)&1);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the Number:\n");
    scanf(" %d",&n);

    set(&n,0);
    bin_print(n);

    clear(&n,0);
    bin_print(n);

    toggle(&n,0);
    bin_print(n);

    set(&n,31);
    bin_print(n);

    clear(&n,31);
    bin_print(n);

    toggle(&n,31);
    bin_print(n);

    set(&n,2);
    bin_print(n);

    clear(&n,2);
    bin_print(n);

    toggle(&n,2);
    bin_print(n);
}