#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
    //if both list are empty
    if( *head1 == NULL && *head2 == NULL)
    {
        return LIST_EMPTY;
    }
    // if first list empty and second list is non empty
   else if( *head1 == NULL && *head2 != NULL)
    {
        *head1 = *head2;
        sort(&*head1);
    }
    // if second list is empty and first list is non empty
   else if( *head1 != NULL && *head2 == NULL)
    {
        sort(&*head1);
    }
    // if both lists are non empty
    else
    {
        Slist *temp = *head1;
        // traverse till end of the first list 
        while( temp-> link != NULL)
        {
            temp = temp->link;  //move temp to last node
        }
         // attach list 2 to end of list 1
         temp -> link = *head2;
         //sort the values
         sort(&*head1);
    }
    
       return SUCCESS;
}
