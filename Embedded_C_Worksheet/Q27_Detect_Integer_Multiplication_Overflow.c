/* Q27. Detect Integer Multiplication Overflow------------------------------------------
Problem Statement:
 Determine if a*b overflows 32-bit signed int, and if not, return the product.
 Explanation / Concept:
 Use division check: prod/a == b when a!=0, and bounds check vs INT_MAX/MIN.
 Step-by-Step Logic (No Code):
 1. Compute prod = a*b in wider type if available.
 2. If a!=0 and prod/a != b  overflow.
 3. Additionally check against INT_MAX/MIN when using 64-bit temp.
 4. Report overflow without UB.
 Sample Inputs & Expected Outputs:
 a, b | Expected-------------+--------
50000, 50000 | Overflow
 1000, 2000 | 2000000 */

#include <stdio.h>
#include <limits.h>

// check overflow
int multiply_safe(int a, int b, int* result) {
    long long prod = (long long)a * b;
    if (prod > INT_MAX || prod < INT_MIN) 
	return 0;
    *result = (int)prod;
    return 1;
}

int main() {
    int res;
    if (multiply_safe(1000,2000,&res)) 	
	printf("%d\n", res);
    else 
	printf("Overflow\n");
}
