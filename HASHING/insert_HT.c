#include"hash.h"

int insert_HT(hash_t *arr, int element, int size)
{
    // create a index to insert an element
    int index = element % size ;
    
    // if the value is -1 then store with element
    if( arr[index].value == -1 )
    {
        arr[index].value = element;
        return SUCCESS;
    }
    // if the collision occurs ,then using dirct chaining add the another structure(node)
    hash_t *new = malloc( sizeof(hash_t) );
    if( new == NULL )
    {
        return FAILURE;
    }
    // update the new node with value and links
    new -> value = element;
    new -> link = NULL;
    new -> index = index;
    // if the main table is filled
    if( arr[index].link == NULL)
    {
        arr[index].link = new;
        return SUCCESS;
    }
    //  if there are many nodes attached to same key then
    hash_t *temp = arr[index].link;
    // traverse till last node
    while( temp-> link != NULL )
    {
        temp = temp->link;
    }
    temp -> link = new;
    return SUCCESS;
    
    
}
