/*
Write a program to modify specific portions of a given integer:
Set all bits in the Least Significant Byte (LSB) to 1
Set all bits in the Most Significant Byte (MSB) to 1
Set all bits in the Least Significant Nibble to 1
Set all bits in the Most Significant Nibble to 1
Set n bits to 1 (user input)
Clear n bits (set to 0), with n as input
Toggle n bits (user input)
*/

#include<stdio.h>

void set(int* p,int q,int r)
{
    for(int i=q;i<r;i++)
    *p|=(1<<i);
}

void clear(int* p,int q,int r)
{
    for(int i=q;i<r;i++)
    *p=*p&~(1<<i);
}

void toggle (int* p,int q,int r)
{
    for(int i=q;i<r;i++)
    *p^=(1<<i);
}

void print(int n)
{
    for(int i=31;i>=0;i--)
    printf("%d ",(n>>i)&1);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    set(&n,0,8);
    print(n);

    set(&n,24,32);
    print(n);

    set(&n,0,4);
    print(n);

    set(&n,28,32);
    print(n);

    set(&n,5,8);
    print(n);

    clear(&n,5,8);
    print(n);

    toggle(&n,5,8);
    print(n);
}