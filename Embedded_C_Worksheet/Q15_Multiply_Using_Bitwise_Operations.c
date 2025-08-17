/*Q15. Multiply Using Bitwise Operations-------------------------------------
Problem Statement:
 Compute a*b using shifts and additions only.
 Explanation / Concept:
 Russian peasant (shift-add) multiplication builds the result by adding a when current bit of b is 1; shift a<<=1, b>>=1.
 Step-by-Step Logic (No Code):
 1. Initialize result=0.
 2. While b>0: if (b&1) add a to result.
 3. Left-shift a; right-shift b.
 4. Watch for signed overflow in fixed widths.
 Sample Inputs & Expected Outputs:
 a, b | Expected------+--------
7, 6 | 42 
13, 0 | 0 
-3, 5 | -15 */

#include <stdio.h>

// multiply using shifts and adds
int multiply(int a, int b) {
    int res = 0;
    while (b > 0) {
        if (b & 1) 
		res += a;
        a <<= 1;
        b >>= 1;
    }
    return res;
}

int main() {
    printf("%d\n", multiply(7,6));  // 42
    printf("%d\n", multiply(13,0)); // 0
}
