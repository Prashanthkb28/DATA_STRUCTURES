#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
    int flag =0;
    /* check for empty list */
    if(*head == NULL)
        return LIST_EMPTY;
     
     /// create a local refernces to head   
    Slist *temp = *head;
     Slist *temp2 = NULL;
     
    // traverse through the list
    while(temp ->link != NULL)
    {
        // if the data found 
        if(temp->data == data)
        {
            temp2 = temp;          //make temp2 to point to temp
            flag =1;               // make flag as 1
        }
            temp=temp->link;       // move temp to traverse
            
    }
    if( flag == 1)                 //if flag is 1
    {
        temp->link = temp2;         // create a loop from last node to temp2
        return SUCCESS;
    }
    else
    {
        return DATA_NOT_FOUND;
    }

}
