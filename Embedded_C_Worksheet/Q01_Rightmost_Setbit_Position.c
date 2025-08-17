/*Q01. Position of Rightmost Set Bit (No Loops)
---------------------------------------------
Problem Statement:
Given a positive integer n, report the 1-based position of the least significant bit that is 1. Avoid loops in the final implementation.
Explanation / Concept:
Any integer n has a two's-complement negative −n. The identity n & (−n) isolates the lowest set bit by zeroing out all higher bits.
The isolated bit is a power of two; its position is log2(value) + 1. Many ISAs have CLZ/CTZ instructions that do this in O(1).
Step-by-Step Logic (No Code):
1. Isolate the rightmost set bit with n & (−n).
2. Compute its base-2 index (e.g., via table, count-trailing-zeros, or integer log).
3. Add 1 to convert 0-based index to 1-based position.
4. Handle n = 0 explicitly (undefined/no set bits).
Sample Inputs & Expected Outputs:
Input n | Binary | Output Position
--------+--------+----------------
18 | 10010 | 2
40 | 101000 | 4
12 | 01100 | 3 */

#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {                // if number is 0, no set bits
        printf("No set bits\n"); 
        return 0;
    }

    int x = n & -n;              // isolate rightmost set bit
    int pos = (int)(log2(x)) + 1;// find position (1-based)
    printf("Position = %d\n", pos);

    return 0;
}
