#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{ 
    /* check for list empty */
    if(*head == NULL)
        return LIST_EMPTY;
    /* create a local reference to head and pointer */
    Slist *next = *head;
    Slist *current = *head;
    Slist *prev = NULL;
    // traverse throgh the list 
    while( current != NULL)
    {
        next = next -> link;         // move the next pointer
        current -> link = prev;      // assign the current link with prev
        prev = current;
        current = next;
    }
    *head = prev ;         // update the head
    return SUCCESS;

} 
