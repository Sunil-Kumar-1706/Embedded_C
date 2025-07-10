//Write macros to set, clear, and toggle the nth bit using bitwise operators.

#include<stdio.h>
#define SET(n,p)  n|=(1<<p)
#define CLEAR(n,p) n= n&~(1<<p)
#define TOG(n,p)  n^=(1<<p)

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
    
    printf("BINARY OF %d:\n",n);
    print(n);

    SET(n,3);
    print(n);

    CLEAR(n,3);
    print(n);

    TOG(n,3);
    print(n);
}