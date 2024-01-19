#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{
    /* check for empty list */
    if( head == NULL)
        return LIST_EMPTY;
    /* create a local refernce to head */
    Slist *slow = head;         
    Slist *fast = head;
    
    // traverse through the list
    while(fast != NULL  && fast->link != NULL)
    {
        fast = fast ->link->link;     //move the fast pointer twice
        slow =slow->link;             // move the slow pointer once
        if(fast == slow)
            return SUCCESS;            // if fast and slow are pointing to same node
    }
    return LOOP_NOT_FOUND;
}
