/*11.Question: Sort array in ascending order
Question description: Write a C program to sort elements in ascending order.
Sample data:
Input: 20 5 10 8
Expected output:
Sorted array: 5 8 10 20*/

#include<stdio.h>

void main()
{
    int a[5];
    int i,j,temp,ele;
    ele=sizeof(a)/sizeof(a[0]);
    printf("input:");
    for(i=0;i<ele;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<ele;i++)
    {
        for(j=0;j<ele-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("output:");
     for(i=0;i<ele;i++)
    {
        printf("%d ",a[i]);
    }
}