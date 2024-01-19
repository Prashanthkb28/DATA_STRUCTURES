#include "dll.h"

int dl_insert_first(Dlist **head, Dlist **tail, int data)
{
    // create a new node 
    Dlist *new = malloc(sizeof(Dlist) );
    if( new == NULL )
        return FAILURE;
    // update the data and link fileds of new node
    new -> data = data;
    new -> next = NULL;
    new -> prev = NULL;
    // if list is empty
    if( *head == NULL && *tail == NULL)
    {
        *head = *tail = new;
        return SUCCESS;
    }
    // if multiple nodes are present 
    new -> prev = NULL;
    new -> next = *head;
    *head = new;
    new->next -> prev = new;
    
    return SUCCESS;

}
