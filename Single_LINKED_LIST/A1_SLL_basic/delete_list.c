#include "sll.h"

int sl_delete_list(Slist **head)
{
	/* check for empty list */
	if(*head == NULL)
	    return FAILURE;
	 /* if the list is non empty */
	 // traverse through the list untill last node to delete nodes 
	 while( *head != NULL)
	 {
	     sl_delete_first(head);
	 }
	 return SUCCESS;
	 
}
