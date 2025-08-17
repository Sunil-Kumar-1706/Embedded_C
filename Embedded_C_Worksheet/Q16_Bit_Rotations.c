/*Q16. Bit Rotations (Left & Right)--------------------------------
Problem Statement:
 Rotate bits of a 32-bit value by d positions.
 Explanation / Concept:
 Rotation differs from shift by reintroducing shifted-out bits at the other end. Use masks to limit d to word width.
 Step-by-Step Logic (No Code):
 1. Normalize d = d % 32.
 2. For left rotate: (x<<d) | (x>>(32-d)).
 3. For right rotate: (x>>d) | (x<<(32-d)).
 4. Ensure unsigned shifts to avoid sign issues.
 Sample Inputs & Expected Outputs:
 x (hex), d | ROL(x,d) | ROR(x,d) --------------+------------+----------
0x12345678, 8 | 0x34567812 | 0x78123456
 0x80000001, 1 | 0x00000003 | 0xC0000000*/

#include <stdio.h>
#include <stdint.h>

// rotate left
uint32_t rol(uint32_t x, unsigned int d) {
    d %= 32;
    return (x << d) | (x >> (32 - d));
}

// rotate right
uint32_t ror(uint32_t x, unsigned int d) {
    d %= 32;
    return (x >> d) | (x << (32 - d));
}

int main() {
    printf("0x%X\n", rol(0x12345678,3)); 
    printf("0x%X\n", ror(0x12345678,2)); 
}
