/*Count occurrences of a number
Question description:
Write a C program to count how many times a specific number appears in an array.
Sample data:
Input array: 1 2 3 2 2 5 Number to count: 2
Expected output:
Number 2 occurs 3 times*/
#include<stdio.h>
int main()
{
int ele;
    printf("Enter the number of elemets:\n");
    scanf("%d",&ele);
    int arr[ele];
    int i,j,count;
    printf("Enter the array elements\n");
        for(i=0;i<ele;i++)
        scanf("%d",&arr[i]);

for(i = 0; i < ele; i++) 
    {
        int isVisited = 0;
        for(j = 0; j < i; j++)
         {
            if(arr[i] == arr[j])
             {
                isVisited = 1;
                break;
             }
        }

        if(!isVisited)
         {
            count = 1;
            for(j = i + 1; j < ele; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            if(count>1)
            printf("%d occurs %d time\n", arr[i], count);
        }
    }
}
