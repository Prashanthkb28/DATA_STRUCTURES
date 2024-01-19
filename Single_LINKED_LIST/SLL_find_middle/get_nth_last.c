#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data) 
{ 
    /* check for list empty */
    if(head == NULL )
        return LIST_EMPTY;
    /* if the given position is zero then return position nt found */    
    if(pos == 0)
            return FAILURE;
        
    /* create a local referencre to the head */
    Slist *temp1 = head;
    Slist *temp2 = head;
    
    /* move the both pointers travrese till last node */
    while( temp1 != NULL)
    {
        temp1 = temp1 -> link;          // update the temp1
        /* check position is non zero */
        if(pos > 0)
        {
            pos--;     // decrement the position
        }
        else
        {
            temp2 = temp2 -> link;    // upadte the temp2
        }
    }
    /* check for the position is zero and return the value */
    if(pos > 0)
    {
      return FAILURE;
    }
   else
    {
     *data = temp2->data;    // assign the position
      return *data;
    }
} 
