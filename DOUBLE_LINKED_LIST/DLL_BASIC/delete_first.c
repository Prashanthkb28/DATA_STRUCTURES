#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
    // check for list empty
    if( *head == NULL && *tail == NULL )
        return FAILURE;
        
    // if the only node in the list 
    if( (*head) -> next == NULL )
    {
        Dlist *temp = *head;
        (*head) = *tail = NULL;
        free(temp);
        
        return SUCCESS;
    }
    
    // if multiple nodes are present
      // create a local reference to head
      Dlist *temp = *head;
      temp->next->prev = NULL;
      (*head) = temp -> next;
      
      free(temp);
      
      return SUCCESS;

}
