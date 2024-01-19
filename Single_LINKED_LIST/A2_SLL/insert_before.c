#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    /* check for the empty list */
    if( *head == NULL)
        return LIST_EMPTY;
        
    /* if the data present in the first node */
    if( (*head)->data == g_data)
    {
        /*create a new node */
        Slist *new = malloc(sizeof(Slist));
        
        /*update the new node data and link */
        new->data = ndata;
        new->link = *head;
        *head = new;          // update the head pointer
        return SUCCESS;
    }
    
    /* if the list conatins multiple nodes */
    
    // create a local reference to head 
    Slist *temp =(*head);
    Slist *prev = NULL;
    /* traverse through the list */
    while( (temp!= NULL) && ((temp->data) != g_data ) )
    {
        prev=temp;          // assign temp to prev node
        temp=temp->link;   // update temp to traverse
    }
    if(temp == NULL)
    {
        return DATA_NOT_FOUND;
    }
    
    else
    {
            /* create a  new node */
            Slist *new = malloc(sizeof(Slist));
            /* validate new node created or not */
            if(new == NULL)
                return FAILURE;
                
            /*update data and link of new data */
            new->data = ndata;
            prev->link = new;
            new->link = temp;  // establishing link b/w new node and next node
           
            return SUCCESS;
    }
}
