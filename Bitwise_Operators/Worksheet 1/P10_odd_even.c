//Write a C program to determine whether a number is odd or even using bitwise operators.

#include<stdio.h>

void check(int n)
{
    if((n>>0)&1)
    printf("ODD\n");
    else
    printf("EVEN\n");
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    check(n);
}