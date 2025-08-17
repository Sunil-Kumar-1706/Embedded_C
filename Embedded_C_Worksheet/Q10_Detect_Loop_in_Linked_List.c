/* Q10. Detect Loop in a Singly Linked List (Floyd’s Cycle)-------------------------------------------------------
Problem Statement:
 Given the head of a singly linked list, detect if a cycle exists using O(1) extra space.
 Explanation / Concept:
 Floyd’s hare & tortoise pointers advance at different speeds; if a cycle exists they eventually meet. This avoids auxiliary memory and is 
deterministic.
 Step-by-Step Logic (No Code):
 1. Initialize slow=head, fast=head.
 2. Advance slow by one and fast by two per step.
 3. If fast or fast->next becomes NULL: no cycle.
 4. If slow == fast at any time: cycle detected.
 Sample Inputs & Expected Outputs:
 List Shape | Expected ----------------------+--------------
1 2 3 4 5 NULL | No cycle 
1 2 3 4 2 (back to 2) | Cycle detected*/

#include <stdio.h>
#include <stdlib.h>

// linked list node
struct Node {
    int data;
    struct Node* next;
};

// detect cycle (Floyd's method)
int detect_Cycle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) 
		return 1; // cycle found
    }
    return 0; // no cycle
}

int main() {
    struct Node a={1,NULL}, b={2,NULL}, c={3,NULL};
    a.next = &b; 
    b.next = &c; 
    c.next = &a; // make cycle
    printf("%d\n", detect_Cycle(&a)); // 1
}
