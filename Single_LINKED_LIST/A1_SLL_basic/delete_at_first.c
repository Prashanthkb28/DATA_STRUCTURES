#include "sll.h"

int sl_delete_first(Slist **head)
{
    /* check for empty list */
    if( *head == NULL )
        return FAILURE;
        
    /* create a local reference to head */
    Slist *temp = *head;            // store head to the local ref temp
    *head =temp->link;              // update the head with next node address
    free(temp);                     // free the temp which is pointing to first node
    return SUCCESS;
    
}
