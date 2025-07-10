//Check whether a number is even or odd using bitwise operator
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