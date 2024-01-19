#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
	/* create a new node */
	Slist *new = malloc(sizeof(Slist));         // dynamic memory allocation for a new node
	
	/* validate for the node created or not */
	if(new == NULL)
	    return FAILURE;
	    
	/* update the data and link part of new nodev*/
	new->data = data;
	new->link = NULL;
	 /* if the list is empty */
	 if( *head == NULL)
	 {
	     *head = new;                         // update the head with the new node address
	     return SUCCESS;  
	 }
	 /* if the list is non empty */
	 // create a local refernce to head
	 Slist *temp = *head;                    // store the head in temp
	 *head = new ;                           // update head with new node address
	 /* update the new node link */
	 new->link = temp;                      // store the next node addr in the link part of new node
	 return SUCCESS;
	
}
