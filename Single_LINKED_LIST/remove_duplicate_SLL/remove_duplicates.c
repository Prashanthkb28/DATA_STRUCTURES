#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
    /* check for the empty list */
    if( (*head) == NULL)
    {
        return FAILURE;
    }
    
    /* if only one node is present */
    if((*head)->link == NULL)
    {
        return SUCCESS;
    }
    
    /* if there are multiple nodes */
    
    // create a local referencre to head
    Slist *temp1 = *head;
    Slist *prev = temp1;
    Slist *temp2 = temp1 -> link;
    // traverse through the list 
    while(temp1)
    {
        prev = temp1;   // update the prev
        temp2 = temp1 -> link;       // move the temp2 
        // traverse through remaning nodes to compare  data*/
        while(temp2)
        {
            // if the data matches then remove the node 
            if( temp1 -> data == temp2 -> data)
            {
                // establish the link b/w prev node  and next node and then delete the temp2 node
                prev -> link = temp2 -> link;
                free(temp2);
                temp2 = prev -> link;      // upadte the temp2 with prev link
            }
            else
            {
                prev = temp2;
                temp2 = temp2 -> link;     // move temp2 to traverse
            }
        }
        temp1 = temp1 -> link;
    }
    return SUCCESS;

}
