/* Q13. Count Trailing Zeros (CTZ)------------------------------
Problem Statement:
 Return the number of consecutive 0-bits starting from the least significant bit.
 Explanation / Concept:
 For nonzero n, CTZ equals the index of the isolated bit n & -n. Zero is a special case (commonly width=32).
 Step-by-Step Logic (No Code):
 1. If n==0, define CTZ as word width (e.g., 32).
 2. Compute isolated = n & -n.
 3. Position = log2(isolated).
 4. Return the count as position.
 Sample Inputs & Expected Outputs:
 n (bin) | Expected CTZ----------+------------
0001 0000 | 4 
0100 0000 | 6 
0000 0000 | 32 */

#include <stdio.h>

// count number of trailing zeros
int ctz(unsigned int n) {
    if (n == 0) 
	return 32;
    int count = 0;
    while ((n & 1) == 0)
    { 
	count++; 
	n >>= 1; 
    }
    return count;
}

int main() {
    printf("%d\n", ctz(16)); // 4
    printf("%d\n", ctz(64)); // 6
}
