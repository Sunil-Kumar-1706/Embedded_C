/* Q49. Move All Zeros to End (Stable)----------------------------------
Problem Statement:
 Reorder an array so that all nonzeros retain relative order and all zeros move to the end.
 Explanation / Concept:
 Stable compaction using a write index avoids extra space.
 Step-by-Step Logic (No Code):
1. Initialize write=0.
 2. For i=0..n-1: if arr[i]!=0 write arr[write++]=arr[i].
 3. Fill remaining indices write..n-1 with 0.
 4. Preserve nonzero order.
 Sample Inputs & Expected Outputs:
 Input | Expected -------------+------------
[0,1,0,3,12] | [1,3,12,0,0]
 [0,0,0] | [0,0,0]*/

#include <stdio.h>

// move zeros keeping order
void moveZeros(int arr[], int n) {
    int write=0;
    for (int i=0;i<n;i++) 
	if (arr[i]!=0) 	
		arr[write++] = arr[i];
    while (write<n) 	
	arr[write++] = 0;
}

int main() {
    int a[] = {0,1,0,3,12};
    int n = 5;
    moveZeros(a,n);
    for (int i=0;i<n;i++) 
	printf("%d ",a[i]); 
}
