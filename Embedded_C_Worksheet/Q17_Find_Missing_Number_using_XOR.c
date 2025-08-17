/*
 Q17. Find Missing Number (0..n) via XOR--------------------------------------
Problem Statement:
 Given an array of n elements of 0..n with one missing, find the missing value in O(n) time and O(1) extra space.
 Explanation / Concept:
 XOR cancels pairs: XOR all indices 0..n and all array elements; the result is the missing number.
 Step-by-Step Logic (No Code):
 1. Compute xor_all_indices for 0..n.
 2. XOR with every element of array.
 3. The final XOR is the missing value.
 4. Validate with small n for intuition.
 Sample Inputs & Expected Outputs:
 Array | Expected Missing----------+----------------
[0,1,3,4] | 2 
[1,2,3,4] | 0 
*/

#include <stdio.h>

// find missing number from 0..n
int find_missing(int arr[], int n) {
    int xor_all = 0, xor_arr = 0;
    for (int i = 0; i <= n; i++) 
	xor_all ^= i;
    for (int i = 0; i < n; i++) 
	xor_arr ^= arr[i];
    return xor_all ^ xor_arr;
}

int main() {
    int a1[] = {0,1,3,4};
    printf("%d\n", find_missing(a1,4)); // 2
    int a2[] = {1,2,3,4};
    printf("%d\n", find_missing(a2,4)); // 0
}
