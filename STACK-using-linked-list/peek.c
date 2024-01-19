#include "stack.h"

int Peek(Stack_t **top)
{
    /* check for empty stack */
    if(*top == NULL)
        return FAILURE;
        
    /*if non empty stack return the top element */
    return (*top) -> data;

}
