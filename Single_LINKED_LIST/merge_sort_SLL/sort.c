#include "sll.h"    

//sortList() will sort nodes of the list in ascending order  
int sort(Slist **head) 
{  
    
    /* check for empty list */
    if(*head == NULL)
    return LIST_EMPTY;
    
    /* if only one node is present in list */
    if( (*head)->link == NULL)
        return SUCCESS;
    
    
    /* if multiple nodes in the list */
    // create a local reference
    Slist *temp1;
    Slist *temp2 = NULL;
    Slist *prev;

    while ((*head)->link != temp2)
    {
        temp1 = *head;
        prev = NULL;

        while (temp1->link != temp2)
        {
            // check for data while traversing
            if (temp1->data > temp1->link->data)
            {
                // Swap nodes
                Slist *temp = temp1->link;
                temp1->link = temp->link;
                temp->link = temp1;
                 // if data at the 1st node
                if (temp1 == *head)
                {
                    *head = temp;   
                }
                else
                {
                    prev->link = temp;
                }

                temp1 = temp;
            }
            else
            {
                prev = temp1;
                temp1 = temp1->link;
            }
        }

        temp2 = temp1;
    }

    return SUCCESS;

}  

