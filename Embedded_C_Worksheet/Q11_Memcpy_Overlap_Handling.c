/* Q11. memcpy with Overlap Handling (memmove semantics)----------------------------------------------------
Problem Statement:
 Copy n bytes from src to dest safely even if regions overlap.
 Explanation / Concept:
 Overlapping memory requires direction-aware copy to prevent clobbering. Forward copy for non-overlap/low dest; reverse for overlap 
with dest inside source tail.
 Step-by-Step Logic (No Code):
 1. Check if dest < src: copy forward byte-wise or in aligned chunks.
 2. Else copy from the end backward to avoid overwrite.
 3. Consider alignment and use word-sized moves when safe.
 4. Validate inputs and handle n=0 quickly.
 Sample Inputs & Expected Outputs:
 dest, src, n | Initial Bytes | Expected dest after copy-------------+-------------------+------------------------
d=0,s=4,n=4 | [A B C D E F G H] | [E F G H] 
d=2,s=0,n=4 | [A B C D E F G H] | [A B A B C D G H]*/

#include <stdio.h>
#include <string.h>

// safe copy with overlap
void* my_memmove(void* dest, const void* src, size_t n) {
    unsigned char* d = dest;
    const unsigned char* s = src;
    if (d < s) {
        // forward copy
        for (size_t i = 0; i < n; i++) 
		d[i] = s[i];
    } 
    else {
        // backward copy
        for (size_t i = n; i > 0; i--) 
		d[i-1] = s[i-1];
    }
    return dest;
}

int main() {
    char str[20] = "ABCDEFGH";
    my_memmove(str+2, str, 5);  // overlap copy
    printf("%s\n", str);
}
