#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
    /* check for empty LIst */
    if( (*head == NULL) && (n > 1) )
        return LIST_EMPTY;
    /* if the position is negative */
    if( n < 0)
        return POSITION_NOT_FOUND;
    
    /* if data to be insert at position is 1  (n=1)*/
    if( n == 1)
    {
        /* create a new node and validate node is created or not */
        Slist *new = malloc(sizeof(Slist));
        if(new == NULL)
            return  FAILURE;
        /*  insert at first function */
        new->data = data;
        new->link = *head;
        *head = new;
        return SUCCESS;
    }
    /* if to insert other than first position */
    int count = 1;  // create a local variable to keep track of position during traversal 
    Slist *temp =*head;
    while(temp != NULL)
    {
        if(++count == n)
        {
            /* create a new node and validate node is created or not */
            Slist *new = malloc(sizeof(Slist));
            if(new == NULL)
                return FAILURE;
            // update the data and link part of new node 
            new->data =  data;
            new->link = temp->link;
            // update the prev node link with new node address
            temp->link = new;
            return SUCCESS;
        }
        else
        {
            temp = temp->link;     // update the temp to traverse
        }
    }
    return POSITION_NOT_FOUND;
}
