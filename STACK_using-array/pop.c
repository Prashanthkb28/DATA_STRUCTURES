#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *s)
{	
	/* check for empty stack */
	if(s->top == -1)
	    return FAILURE;
	    
	/* decrement the top */
	(s->top)--;              // s->top =s->top -1
	return SUCCESS;
}
