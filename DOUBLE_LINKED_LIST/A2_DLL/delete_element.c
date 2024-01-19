#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{
    // check for empty list
    if( *head == NULL)
        return LIST_EMPTY;
        
    // if the data found at first node
    if( (*head)->data == data)
    {
        // update the next and prev using temp
        Dlist *temp = *head;
        *head = temp -> next;
        temp->next->prev = NULL;
        free(temp);
        return SUCCESS;
    }
    // if the data found at last node
    if( (*tail)->data == data)
    {
        // update the next and prev using temp
        Dlist *temp = *tail;
        *tail = temp -> prev;
        temp->prev->next = NULL;
        free(temp);
        return SUCCESS;
    }
    // if the data in the middle of list
    Dlist *temp = (*head)->next;
    Dlist *temp2 = *head;
    // traverse through the list
    while(temp != NULL && temp->data != data )
    {
        temp2 = temp;
        temp = temp->next;
    }
    if( temp == NULL)
    {
        return DATA_NOT_FOUND;
    }
    else
    {
        temp2->next = temp->next;
        free(temp);
        return SUCCESS;
    }

}
