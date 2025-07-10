//Write a program to reverse all bits in an integer.

#include<stdio.h>

void rev(int* p)
{
    int i,j;
    for(i=0,j=31;i<j;i++,j--)
    {
        if((((*p)>>i)&1)!=(((*p)>>j)&1))
        {
            (*p)^=(1<<i);
            (*p)^=(1<<j);
        }
    }
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

    printf("Before Reversing:\n");
    print(n);

    rev(&n);
    printf("After Reversing:\n");
    print(n);
}
