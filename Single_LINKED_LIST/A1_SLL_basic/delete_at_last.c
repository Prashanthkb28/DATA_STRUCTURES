#include "sll.h"

int sl_delete_last(Slist **head)
{
    /* check for empty list */
    if( *head == NULL )
        return FAILURE;
        
    /* check for only one node */
    if( (*head)->link == NULL )
    {
        free(*head);                       // free the head  i.e  addr stored in head
        *head=NULL;                       // assign head to NULL
        return SUCCESS;
    }
    /* if more than one node */
      // create a local reference to head and prev
      Slist *temp = *head ;
      Slist *prev = NULL;                // to keep track of the previous node 
     /* traverse through the list */
     while( (temp->link) != NULL)
     {
         prev=temp;                     // store the temp  adrress to previous
         temp=temp->link;              // update the temp
     }
     /* upadte the previous node link to NULL and free the temp (in which temp->link=NUll)last node */
     prev->link = NULL;               //update the last-1 node link to NULL 
     free(temp);
     return SUCCESS;
     
}
