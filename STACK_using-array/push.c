#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
    /* check for stack empty */
    if( s->top == (s->capacity)-1 )
        return FAILURE;
        
    /* increment the top to push an element into a stack */
    (s->top)++;                         //s->top = s->top + 1
    
    /* update the stack element i.e add an element to stack array */
    s->stack[s->top] = element;
    return SUCCESS;
}
