#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted( Slist **head, data_t data) 
{
    /* create a new node */
    Slist *new = malloc(sizeof(Slist));
        if(new == NULL)
            return FAILURE;
        new->data = data;
        new->link = NULL;
            
    /* check for emoty list */
    if(*head == NULL)
    {
            *head = new;
            return SUCCESS;
    }
    
    /* cif list is not empty and conatins only one node */
        if( (*head)->data > data)
        {
            new->link = (*head);
            *head= new;
            return SUCCESS;
        }

    /* if list contains multiple nodes */
    // create a local reference to head
    Slist *temp = *head;
    Slist *prev = NULL;
    while(temp != NULL)
    {
        if( (temp->data) > data )
        {
            break;
        }
        
        
            prev= temp;
            temp= temp -> link;
        
    }
    new->link = temp;
    prev->link = new;
    return SUCCESS;
} 
