#include "dll.h"


int dl_delete_list(Dlist **head, Dlist **tail)
{
    // check for empty list
    if( *head == NULL && *tail == NULL)
        return FAILURE;
    
    // if multiple nodes present in the list 
    while( *head != NULL)
    {
        dl_delete_first(&(*head), &(*tail) );
    }
    return SUCCESS;

}
