// Swap two numbers using bitwise operator
#include<stdio.h>
void swp(int* x,int* y)
{
    (*x)=(*x)^(*y);
    (*y)=(*x)^(*y);
    (*x)=(*x)^(*y);
}
int main()
{
    int x,y;
    printf("Enter the numbers:\n");
    scanf("%d%d",&x,&y);

    printf("Before Swapping:\n");
    printf("x=%d  y=%d\n",x,y);

    swp(&x,&y);

    printf("After Swapping:\n");
    printf("x=%d  y=%d\n",x,y);
}