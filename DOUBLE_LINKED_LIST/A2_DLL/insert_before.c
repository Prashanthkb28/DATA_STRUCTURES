#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    // check for empty list
    if( *head == NULL)
        return  LIST_EMPTY;
    
    // if the list is not empty
    Dlist *temp = *head;   // create a local refernce to head
     // traverse through the list
     while( temp != NULL)
     {
         // if the given data not found in the list traverse to next node
         if( temp -> data != gdata)
            temp= temp -> next;
            
         else
         {
             // create a new node
             Dlist *new = malloc( sizeof(Dlist));
             if( new == NULL)
                return FAILURE;
              // update the data and link fields of new node  
            new -> data = ndata;
            new ->prev = temp -> prev;
            new -> next = temp;
            // if the data found at first node
            if( *head != temp)
            {
                new-> prev -> next = new;
            }
            else
                *head = new;
            return SUCCESS;
            
         }
     }
     return DATA_NOT_FOUND;
}
