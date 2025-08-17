/* Q05. Reverse Endianness of a 32-bit Integer------------------------------------------
Problem Statement:
 Convert a 32-bit value between little-endian and big-endian byte orders.
 Explanation / Concept:
 Different buses and peripherals use different endianness. Swapping byte order rearranges bytes B0..B3 as B3 B2 B1 B0. Careful 
masking/shifting avoids aliasing issues. Useful when parsing network (big-endian) vs. MCU-register (often little-endian) data.
 Step-by-Step Logic (No Code):
 1. Extract the four bytes of the input value.
 2. Reassemble them in reversed order via shifts and OR.
 3. Validate with known patterns (0x11223344  0x44332211).
 4. Apply to arrays/streams where required by protocol.
 Sample Inputs & Expected Outputs:
 Input (hex) | Output (hex)------------+------------
0x12345678 | 0x78563412 
0xAABBCCDD | 0xDDCCBBAA*/

#include <stdio.h>
#include <stdint.h>

// swap bytes
uint32_t reverse_endian(uint32_t x) {
    return ((x >> 24) & 0xFF) |
           ((x >> 8)  & 0xFF00) |
           ((x << 8)  & 0xFF0000) |
           ((x << 24) & 0xFF000000);
}

int main() {
    printf("0x%X\n", reverse_endian(0x12345678)); // 0x78563412
}
