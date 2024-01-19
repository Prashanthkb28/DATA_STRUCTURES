#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    // check for empty list
    if( *head ==  NULL)
        return LIST_EMPTY;
    
    //if list is non empty
    // create a local refernce to head
    Dlist *temp = *head;
    // traverse through the list
    while( temp != NULL)
    {
        // if the given data not found travrese to next node
        if( temp -> data != gdata)
            temp = temp -> next;
        else
        {
            // create a new node
            Dlist *new = malloc( sizeof(Dlist));
            // validiate the creation of node sccessfully
            if( new == NULL)
                return FAILURE;
                
            new -> data = ndata;
            new -> next = temp -> next;
            new -> prev = temp;
            /* if the data is found at the last node */
            if( temp != *tail)
                temp -> next -> prev = new;
            else
             *tail= new;
            temp -> next = new;
            return SUCCESS;
        }
    }
        return DATA_NOT_FOUND;
    }
