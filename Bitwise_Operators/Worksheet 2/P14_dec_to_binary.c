//Convert decimal to binary using bitwise operator
#include<stdio.h>
void binary(int n)
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
    binary(n);
}