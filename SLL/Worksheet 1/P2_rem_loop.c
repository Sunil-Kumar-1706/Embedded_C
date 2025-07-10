/*Loop Detection Challenges
Question:
Write a C program to detect and remove a loop in a singly linked list.

Sample data:
List: 1 → 2 → 3 → 4 → 5 → (loop to 2)
Expected output:
Loop detected and removed.
List after removal: 1 2 3 4 5
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int roll;
    struct student* nxt;
}st;

void add_end(st** ptr)
{
    st* temp=malloc(sizeof(st));
    printf("Enter the data:\n");
    scanf("%d",&temp->roll);
    
    if((*ptr)==0)
    {
        temp->nxt = (*ptr);
        (*ptr) = temp;
    }
    else
    {
        st* last = (*ptr);
        while(last->nxt)
        last = last->nxt;

        temp->nxt = last->nxt;
        last->nxt = temp;
    }
}

void print(st* ptr)
{
    if(ptr!=NULL)
    {
        while(ptr)
        {
            printf("%d ",ptr->roll);
            ptr = ptr->nxt;
        }
    }
    else
    printf("Nothing is there\n");
    printf("\n");
}

int removeloop(st* head) 
{
    st *slow = head, *fast = head;

    while (slow && fast && fast->nxt) 
    {
        slow = slow->nxt;
        fast = fast->nxt->nxt;

        if (slow == fast) 
        {
            st* ptr1 = head;
            st* ptr2 = slow;

            if (ptr1 == ptr2) 
            {
                while (ptr2->nxt != ptr1)
                    ptr2 = ptr2->nxt;
                ptr2->nxt = NULL;
            } 
            else 
            {
                while (ptr1->nxt != ptr2->nxt) 
                {
                    ptr1 = ptr1->nxt;
                    ptr2 = ptr2->nxt;
                }
                ptr2->nxt = NULL;
            }
            return 1;
        }
    }
    return 0;
}

int main() 
{
    
    st* head = 0 ;

    add_end(&head);
    add_end(&head);
    add_end(&head);
    add_end(&head);
    add_end(&head);

    head->nxt->nxt->nxt->nxt->nxt=head->nxt;
   
    if (removeloop(head)) 
    {
        printf("Loop detected and removed\n");
    } 
    else 
    {
        printf("No loop found\n");
    }

    printf("List after removal:\n");
    print(head);
}
