#include "dll.h"

int dl_insert_last(Dlist **head, Dlist **tail, int data)
{
    // create a new node 
    Dlist *new = malloc(sizeof(Dlist) );
    // valiadte for successfull memory allocation
    if( new == NULL)
        return FAILURE;
    
    // update the data and link filed of new node
    new -> data = data;
    new -> next = NULL;
    new -> prev = NULL;
    
    // if the list is empty
    if( *head == NULL && *tail == NULL )
    {
        *head = *tail = new;
        return SUCCESS;
    }
    
    // if multiple nodes are present
    (*tail) -> next = new;                    // make prev node next link  to last node addr i.e newly inserted node at last
    new -> prev = *tail;                      // make  prev filed of new node to tail which contains prev node addr
    (*tail) = new;                            
    return SUCCESS;
}
