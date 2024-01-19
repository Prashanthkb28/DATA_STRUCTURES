#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
    /* check for epty list */
    if( (*head) == NULL)
        return LIST_EMPTY;
    /* create a local reference to head */
    Slist *temp = *head;
    /* traverse through the list to find g_data */
    while(temp != NULL)
    {
        /* check for the data found / match to the given data and new data */
        if(temp->data == g_data)
        {
            /* create a new node */
            Slist *new = malloc(sizeof(Slist));
            /* validate for memory allocated / not (node created or not) */
            if(new == NULL)
                return FAILURE;
            /* update the new node data and link */
            new->data = ndata;               
            new->link = temp->link;         
            temp->link = new;
            return SUCCESS;
        }
        temp = temp->link;                   // update temp to traverse
    }
    return DATA_NOT_FOUND;

}
