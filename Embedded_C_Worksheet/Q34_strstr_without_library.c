/*
 Q34. strstr Without Library--------------------------
Problem Statement:
 Find first occurrence of needle in haystack and return its index (or -1).
Explanation / Concept:
 Naive O(n*m) compare suffices for teaching; KMP/Boyer-Moore are optimized variants.
 Step-by-Step Logic (No Code):
 1. For i in 0..len(hay)-len(need): compare forward.
 2. If all chars match, return i.
 3. If none match, return -1.
 4. Consider ASCII vs UTF-8 and case-sensitivity.
 Sample Inputs & Expected Outputs:
 haystack | needle | Expected-----------+--------+--------
"abcdeabc" | "cde" | 2 
"aaaaa" | "b" | -1 
*/

#include <stdio.h>
#include <string.h>

// find substring
int my_strstr(const char* hay, const char* needle) {
    int n = strlen(hay), m = strlen(needle);
    for (int i = 0; i <= n-m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (hay[i+j] != needle[j]) 
		break;
        }
        if (j == m) 
		return i;
    }
    return -1;
}

int main() {
    printf("%d\n", my_strstr("abcdeabc","cde")); // 2
    printf("%d\n", my_strstr("aaaaa","b"));      // -1
}
