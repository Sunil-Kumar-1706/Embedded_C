/*
 Q32. Count Leading Zeros (CLZ) Without Intrinsic-----------------------------------------------
Problem Statement:
 Return the number of zero bits from the MSB down to the first 1.
 Explanation / Concept:
 Linear scan from MSB or binary search on bit ranges; zero input is a special case (word width).
 Step-by-Step Logic (No Code):
 1. If x==0 return width.
 2. Check top half; if zero, add 16 and continue on lower half.
 3. Repeat halving to find first 1.
 4. Return accumulated count.
 Sample Inputs & Expected Outputs:
 x (hex) | Expected CLZ-----------+------------
0x00000001 | 31 
0x80000000 | 0 
0x0000F000 | 16
*/

#include <stdio.h>

// count leading zeros 
int clz(unsigned int x) {
    if (x == 0) 
	return 32;
    int count = 0;
    unsigned int mask = 1u << 31; // start from MSB
    while ((x & mask) == 0) {
        count++;
        mask >>= 1;
    }
    return count;
}

int main() {
    printf("%d\n", clz(0x00000001)); // 31
    printf("%d\n", clz(0x80000000)); // 0
}
