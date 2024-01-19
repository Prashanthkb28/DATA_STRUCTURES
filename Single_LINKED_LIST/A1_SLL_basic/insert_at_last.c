#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
    /* create a new node */
    Slist *new = malloc(sizeof(Slist));   // dynamic memory allocation for a node
    
    /* validation for memory allocation */
    if(new == NULL)
        return FAILURE;
        
    /* update the data and link part of new node */
    new->data = data;
    new->link = NULL;
     
   /*  check for list is empty */
   if( *head == NULL)
   {
       *head = new;               // add new node by upadting head to new node
       return SUCCESS;
   }
   /* if the list is not empty then traverse through the lsit till last node */
   Slist *temp = *head;  // creating local reference to the head
   while( (temp->link) != NULL)
   {
       temp=temp->link;     // update the temp / move the temp till last node
   }
  /* after reaching last node update the temp to new node */
      temp->link = new;
      return SUCCESS;
   
}
