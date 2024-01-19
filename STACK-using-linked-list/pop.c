#include "stack.h"

int Pop(Stack_t **top)
{
	/*check for stack empty */
	if(*top == NULL)
	    return FAILURE;
	/* is stack has only one data */
	
	if( (*top) -> link == NULL)
	{
	    // free the last stack data 
	    free(*top);
	    // update the top 
	    *top = NULL;
	    return SUCCESS;
	}
	/*check for the last element */
	// store the top in temp
	Stack_t *temp = *top;
	*top = temp -> link;
	// deallocate the temp 
	free(temp);

}
