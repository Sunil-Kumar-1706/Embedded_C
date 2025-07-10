//Write a program to multiply a number by 9 using bitwise shift operations.

#include<stdio.h>

void fun(int n)
{
    int i=n,j;
    j=(n<<3)+i;
    printf("%d",j);
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    fun(n);
}