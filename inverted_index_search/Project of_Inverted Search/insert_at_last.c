#include "inverted_search.h"

extern char* fname;
int insert_at_last(Wlist **head, data_t *data)
{
    //Create a new node

    Wlist *new = malloc(sizeof(Wlist));
    if(new == NULL)
    {
	    return FAILURE;
    }
    //Update the new node
    new->file_count = 1;
    strcpy(new->word , data);
    new->Tlink = NULL;
    new->link = NULL;

    // Call the  function to update link table
    update_link_table(&new);

    //Check Wlist is empty or not
    if(*head == NULL)
    {
	    *head = new;
	    return SUCCESS;
    }

    // If its not empty
    Wlist *temp = *head;
    
    //Traverse through the Wlist   
    while(temp->link)
    {
	    temp=temp->link;
    }
    temp->link = new;
    return SUCCESS;
}

//Function to update link table
int update_link_table(Wlist **head)
{
    // Create node

    Ltable *new = malloc(sizeof(Ltable));
    
    // Error check

    if(new == NULL)
    {
	    return FAILURE;
    }
    new->word_count = 1;
    strcpy(new->file_name, fname);
    new->table_link = NULL;

    (*head)->Tlink = new;
    return SUCCESS;
}


