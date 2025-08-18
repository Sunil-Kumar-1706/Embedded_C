/* Q46. Count Set Bits (Brian Kernighan)------------------------------------
Problem Statement:
Count 1s by repeatedly clearing the lowest set bit using n &= (n-1).
 Explanation / Concept:
 Each iteration removes one 1-bit, so loop runs popcount(n) times, not word size.
 Step-by-Step Logic (No Code):
 1. Initialize count=0.
 2. While n!=0: n&=(n-1); ++count.
 3. Return count.
 4. Compare with table/POPCNT for correctness.
 Sample Inputs & Expected Outputs:
 n (bin) | Expected count----------+--------------
1111 0000 | 4 
1010 1010 | 4*/

#include <stdio.h>

// count bits using n & (n-1)
int countBits(int n) {
    int count = 0;
    while (n) {
        n &= (n-1); // clear lowest set bit
        count++;
    }
    return count;
}

int main() { 
    printf("%d\n", countBits(0xAA)); 
}
