/*Q04. Custom Fixed-Size Block Allocator
--------------------------------------
Problem Statement:
Design a tiny allocator that manages N fixed-size blocks from a static array, supporting allocate/free in O(1) average time.
Explanation / Concept:
Embedded systems often avoid malloc/free due to fragmentation and nondeterminism. A fixed-size pool with a free-list provides
constant-time, bounded-latency allocations suitable for ISRs and control loops.
Step-by-Step Logic (No Code):
1. Choose block size and number of blocks from memory budget.
2. Represent available blocks as a bitmap or singly-linked free list.
3. Allocation: remove one block from the free list; Free: return block to the list.
4. Validate pointers and guard against double-free/overrun in debug builds.
Sample Inputs & Expected Outputs:
Operation | Pool State (Free/Used) | Result
--------------+------------------------+----------------
alloc() | 32 free, 0 used | ptr to block 0
alloc() | 31 free, 1 used | ptr to block 1
free(block 0) | 30 free, 2 used | 31 free, 1 used*/

#include <stdio.h>
#define BLOCKS 4
#define SIZE   16

char pool[BLOCKS][SIZE]; // memory pool
int free_list[BLOCKS];   // stack of free blocks
int top=-1;

void init() { 
    for (int i=0;i<BLOCKS;i++) 
        free_list[++top]=i; // push all blocks as free
}

void* alloc() {
    if (top<0) return NULL;      // no free blocks
    return pool[free_list[top--]];
}

void dealloc(void* p) {
    int idx=((char*)p-(char*)pool)/SIZE; // block index
    free_list[++top]=idx; // push back to free list
}

int main() {
    init();
    void* a=alloc();
    void* b=alloc();
    printf("Allocated blocks: %p %p\n",a,b);

    dealloc(a);                  // free one block
    void* c=alloc();             // allocate again
    printf("Reallocated block: %p\n",c);

    return 0;
}
