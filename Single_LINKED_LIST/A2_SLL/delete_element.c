#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    /* check for empty list */
    if(*head == NULL)
        return FAILURE;
    /* if one node is present */
    /* check if the data to be deleted is present in first node */
    if((*head)->data == data)
    {
        Slist *temp = *head; // create a local reference to head
        
        /* update the head */
        *head =(*head)->link;
         
        free(temp);             // free the temp
        return SUCCESS;
    }
    /* if more nodes are present */
    // create a local refernce to head  (temp, prev)
    Slist *temp = (*head)->link;
    Slist *prev = *head;
    
    /* traverse through the list */
    while( (temp != NULL) && (temp->data != data) )
    {
        prev = temp;
        temp = temp->link;       // update the temp to traverse
    }
     if(temp == NULL)
     {
         return DATA_NOT_FOUND;
     }
     else
     {
         /* update the prev node address and then remove the connection */
         prev->link = temp->link;
         free(temp);
         return SUCCESS;
     }
    
}
