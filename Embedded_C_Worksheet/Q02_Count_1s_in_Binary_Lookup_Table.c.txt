/*Q02. Count 1s in Binary Using Lookup Table
------------------------------------------
Problem Statement:
Count the number of 1-bits in a 32-bit unsigned integer using an 8-bit (256-entry) lookup table.
Explanation / Concept:
Popcount can be accelerated by precomputing the bit-count for all 8-bit values (0–255) and summing the counts over four bytes.
This avoids per-bit loops and is deterministic in timing, which is beneficial for embedded systems without POPCNT instructions.
Step-by-Step Logic (No Code):
1. Initialize a 256-entry table with bit counts for 0..255.
2. Split the 32-bit input into four bytes.
3. Sum the four table lookups to obtain the total number of 1s.
4. Consider endianness only for byte access method; the sum is invariant.
Sample Inputs & Expected Outputs:
Input x (dec) | Binary (32-bit) | Expected Count
--------------+-----------------------------------------+---------------
0 | 000...000 | 0
15 | 000...1111 | 4
305419896 | 0001 0010 0011 0100 0101 0110 0111 1000 | 16 */

#include <stdio.h>
unsigned char table[256];

// build table with bit counts for 0–255
void build_table() {
    for (int i=0;i<256;i++) {
        int c=0,x=i; 
        while(x){c+=x&1; x>>=1;} // count bits in i
        table[i]=c;
    }
}

int main() {
    unsigned int x;
    printf("Enter number: "); 
    scanf("%u",&x);

    build_table(); // prepare lookup table

    // split into 4 bytes and add counts
    int count = table[x&0xFF] 
              + table[(x>>8)&0xFF] 
              + table[(x>>16)&0xFF] 
              + table[(x>>24)&0xFF];

    printf("Set bits = %d\n", count);
    return 0;
}
