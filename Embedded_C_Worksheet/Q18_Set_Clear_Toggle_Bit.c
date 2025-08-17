/* Q18. Set, Clear, Toggle a Specific Bit-------------------------------------
Problem Statement:
 Return values after setting, clearing, and toggling bit k of an integer n.
Explanation / Concept:
 Use masks 1<<k with OR (set), AND NOT (clear), XOR (toggle). Keep k within word width.
 Step-by-Step Logic (No Code):
 1. Compute mask = 1u<<k.
 2. Set: n | mask; Clear: n & ~mask; Toggle: n ^ mask.
 3. Validate for boundary bits (k=0, k=31).
 4. Avoid undefined behavior when shifting by width.
 Sample Inputs & Expected Outputs:
 n (bin) | k | Set | Clear | Toggle ----------+---+-----------+-----------+---------
0000 1000 | 3 | 0000 1000 | 0000 0000 | 0000 0000
 0000 0001 | 0 | 0000 0001 | 0000 0000 | 0000 0000*/

#include <stdio.h>

// set, clear, toggle kth bit
unsigned int setBit(unsigned int n, int k)   
{ 
	return n | (1 << k); 
}

unsigned int clearBit(unsigned int n, int k) 
{
	return n & ~(1 << k); 
}

unsigned int toggleBit(unsigned int n, int k)
{ 
	return n ^ (1 << k); 
}

int main() 
{
    unsigned int x = 8; // 1000
    printf("%u\n", setBit(x,3));    
    printf("%u\n", clearBit(x,3));  
    printf("%u\n", toggleBit(x,3)); 
}
