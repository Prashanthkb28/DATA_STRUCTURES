#include "sll.h"

int reverse_recursion(Slist ** head)
{
    if( *head == NULL)
    return LIST_EMPTY;
    /* create a reference pointer */
    Slist *cur = *head;
    Slist *next = cur -> link;
    if ( next == NULL)
    {
        return 0;
    }
    // call recursive function
    reverse_recursion(&next);
    
    cur ->link->link =cur;
    cur -> link = NULL;
    *head = next;

}
