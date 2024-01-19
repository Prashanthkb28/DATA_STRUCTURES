#include "sll.h"
/* Function to get the middle of the linked list*/
int find_mid(Slist *head, int *mid) 
{ 
    /* check for empty list */
    if( head == NULL)
        return LIST_EMPTY;
        
    /*create a local reference to head   fast and slow  where ,
    fast pointer incremented twice(2 step) at a time and slow pointer incremented one step */
    Slist *fast = head;
    Slist *slow = head;
    
    /* traverse through the loop */
    while( (fast != NULL) && ((fast -> link ) != NULL) )
    {
        // increment fast 2 step through list
        fast = fast->link->link;
        // increment slow by one step through list
        slow = slow->link;
    }
    return (slow->data);

} 
