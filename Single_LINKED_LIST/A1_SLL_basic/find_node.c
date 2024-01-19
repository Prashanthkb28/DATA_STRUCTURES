#include "sll.h"

int find_node(Slist *head, data_t data)
{
	/* check for list empty */
	if(head == NULL)
	    return FAILURE;
	int count = 0;
	/* create a local refernce to head */
	Slist *temp = head;
	/* traverse through the list */
	while( (temp->link) != NULL )
	{
	    count++;
	    /* check for the given data present in the list */
	    if( (temp->data) == data )
	    {
	        return count;               //return the count (position of the node)
	    }
	    temp= temp->link;               // update the temp to traverse
	}
	return FAILURE;
}

