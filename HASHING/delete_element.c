#include"hash.h"

int delete_element(hash_t *arr, int data, int size)
{
    // calculate the index
    int index = data % size;
    // if the value of the index is -1 then data not present
    if( arr[index].value == -1 )
    {
        return DATA_NOT_FOUND;
    }
    // if the data is found is the main table node
    if( arr[index].value == data )
    {
        if( arr[index].link == NULL )
        {
            arr[index].value = -1;
        }
        else
        {
            hash_t *temp = arr[index].link;
            arr[index].value = temp->value;
            arr[index].link =temp->link;
            free(temp);
        }
        return SUCCESS;
    }
    // if the data is found in the sub node of the main table index
    hash_t *temp = arr[index].link;
    if( temp->value == data )
    {
        arr[index].link = temp->link;
        free(temp);
        return SUCCESS;
    }
    hash_t *prev = temp;
    temp = temp->link;
    while(temp)
    {
        if(temp -> value == data )
        {
            prev->link = temp -> link;
            free(temp);
            return SUCCESS;
        }
        else
        {
            prev = temp;
            temp = temp -> link;
        }
    }
    return DATA_NOT_FOUND;
}
