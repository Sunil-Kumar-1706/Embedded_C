/* Move all zeros to end of array
Question description:
Write a C program to move all zeros in the array to the end while maintaining the order of non-zero elements.
Sample data:
Input: 1 0 2 0 0 3 4
Expected output:
Output: 1 2 3 4 0 0 0*/

#include<stdio.h>

int main()
{
int ele;
    printf("Enter the number of elemets:\n");
    scanf("%d",&ele);
    int a[ele];
    int i,j=0,k=0,count;
    printf("Enter the array elements\n");
        for(i=0;i<ele;i++)
        scanf("%d",&a[i]);
}