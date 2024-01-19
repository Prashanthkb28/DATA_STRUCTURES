#include"hash.h"

int search_HT(hash_t *arr, int data, int size)
{
    // calculate the size
    int index = data % size;
    
    /* find in the main table with index */
    if( arr[index].value == data )
    {
        return SUCCESS;
    }
    
    hash_t *temp = arr[index].link;
    
    // traverse through sub nodes
    while( temp != NULL )
    {
        if( temp->value == data )
        {
            return SUCCESS;
        }
        temp = temp -> link;
    }
    return DATA_NOT_FOUND;
}
