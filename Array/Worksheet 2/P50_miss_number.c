//Find the missing number in the array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elemets:\n");
    scanf("%d",&n);
    int a[n];
    int i,j,s;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if((i+1)!=a[i]){
            printf("The missing element is %d\n",i+1);
            break;
        }
    }
}
