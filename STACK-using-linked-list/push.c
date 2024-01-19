#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    /* allocate the memory i.e create a new node */
    Stack_t *new = (Stack_t *)malloc(sizeof(Stack_t));
    
    /* check for memory allocated successfully/not */
    if( new == NULL)
        return FAILURE;
        
    /* update the data and link part of new node */
    new -> data = data;
    new -> link = *top;
    // update the top 
    *top = new;
    return SUCCESS;

}
