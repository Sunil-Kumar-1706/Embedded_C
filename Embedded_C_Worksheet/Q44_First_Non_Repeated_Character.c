/*Q44. First Non-Repeated Character (O(N))---------------------------------------
Problem Statement:
 Return the first character in a string that appears exactly once; return '\0' if none.
 Explanation / Concept:
 Two-pass method: count frequencies, then find first with count==1.
 Step-by-Step Logic (No Code):
 1. Initialize count[256]=0.
 2. Pass 1: increment per byte.
 3. Pass 2: return first char with count==1.
 4. If none, return '\0'.
 Sample Inputs & Expected Outputs:
 Input | Expected-----------+--------
"embedded" | 'm' 
"aabbcc" | \0 */

#include <stdio.h>
#include <string.h>

// find first unique char
char first_unique(const char* s) {
    int count[256] = {0};
    for (int i=0;s[i];i++) 
	count[(unsigned char)s[i]]++;
    for (int i=0;s[i];i++) 
	if (count[(unsigned char)s[i]] == 1)
		 return s[i];
    return '\0';
}

int main() {
    printf("%c\n", first_unique("embedded"));
}

