#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    printf("%d\n", *(arr + *(arr + 2) / 10 - 1));
}