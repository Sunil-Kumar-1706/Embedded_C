/*Find Intersection Point
Input: List1: 1 → 2 → 3 → 4 → 5, List2: 9 → 4 → 5 (nodes 4 and 5 are shared)
Expected Output: Intersection at node with value 4*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* create(int data) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    return n;
}

void addend(struct node** head, int data) {
    struct node* n = create(data);
    if (*head == NULL) {
        *head = n;
        return;
    }
    struct node* t = *head;
    while (t->next != NULL)
        t = t->next;
    t->next = n;
}

int len(struct node* h) {
    int c = 0;
    while (h != NULL) {
        c++;
        h = h->next;
    }
    return c;
}

struct node* find_intersect(struct node* a, struct node* b) {
    int la = len(a);
    int lb = len(b);
    int d = abs(la - lb);

    struct node* longl = (la > lb) ? a : b;
    struct node* shortl = (la > lb) ? b : a;

    for (int i = 0; i < d; i++)
        longl = longl->next;

    while (longl != NULL && shortl != NULL) {
        if (longl == shortl)
            return longl;
        longl = longl->next;
        shortl = shortl->next;
    }

    return NULL;
}

int main() 
{
    struct node* a = NULL;
    struct node* b = NULL;

    addend(&a, 1);
    addend(&a, 2);
    addend(&a, 3);
    addend(&a, 4);
    addend(&a, 5);

    addend(&b, 9);

    struct node* t = a;
    while (t != NULL) {
        if (t->data == 4)
            break;
        t = t->next;
    }
    if (t != NULL)
        b->next = t;

    struct node* x = find_intersect(a, b);

    if (x != NULL)
        printf("intersection found at node with value: %d\n", x->data);
    else
        printf("no intersection found\n");

    return 0;
}
