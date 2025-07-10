//Given two integers A and B, write a program to count the number of bits that need to be flipped to convert A into B.

#include<stdio.h>

void flip(int a,int b)
{
    int c=0;
    for(int i=0;i<32;i++)
    {
        if(((a>>i)&1)!=((b>>i)&1))
        c++;
    }
    printf("%d Bits Needs to be Flipped\n",c);
}

int main()
{
    int a,b;
    printf("Enter a and b Values:\n");
    scanf("%d %d",&a,&b);

    flip(a,b);
}