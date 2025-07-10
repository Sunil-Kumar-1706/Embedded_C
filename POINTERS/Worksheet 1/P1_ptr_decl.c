//Understand how to declare a pointer and store the address of a variable.
#include<stdio.h>
int main()
{
    int x=5;
    int* p=&x;
    printf("x = %d\n*p = %d\n",x,*p);
}