//Efficiently calculate the minimum number of bit flips required to convert integer A into integer B.

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