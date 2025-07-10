/*
Write a program to check bit status in an integer:
Check if LSB is set (1) or not (0)
Check if MSB is set (1) or not (0)
Check if the nth bit is set (1) or not (0) (user input)
*/

#include<stdio.h>
void status(int n,int p)
{
    if((n>>p)&1)
    printf("SET\n");
    else
    printf("CLEAR\n");
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("LSB:\n");
    status(n,0);
    printf("\n");

    printf("MSB:\n");
    status(n,31);
    printf("\n");

    int p;
    printf("Enter the bit positin, you want to see the status:\n");
    scanf("%d",&p);
    status(n,p);
    printf("\n");
}