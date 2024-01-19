#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    // check for list empty
    if(*head == NULL)
        return FAILURE;
    // if only one node present in the list
    if( *head == *tail )
    {
        Dlist *temp = *head;
        *head = *tail = NULL;
        free(temp);
        
        return SUCCESS;
    }
    else
    {
    // if multiple nodes are present 
    // create a local refernce to tail
    Dlist *temp = *tail;
    *tail = temp -> prev;         //  make the tail pointer to point to prev node
    temp -> prev ->next = NULL;    //(*tail) -> next = NULL;   // update prev node next filed to NULL
    free(temp);                 // free the last node
    return SUCCESS;
    }
}
