#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *s)
{
	/* check for empty stack */
	if(s->top == -1)
	    return FAILURE;
	    
	/* return the first element of stack (top most element of a stack) */
	return s->stack[s->top];
}
