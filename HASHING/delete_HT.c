#include"hash.h"

int destroy_HT(hash_t *arr, int size)
{
    /* make the table values with -1 and delete all sub nodes */
    for( int i=0; i< size; i++ )
    {
        if( arr[i].value != -1 )
        {
            arr[i].value = -1;
            hash_t  *temp = arr[i].link;
            arr[i].link = NULL;
            
            // traverse through sub nodes and delete
            while( temp )
            {
                hash_t *temp1 = temp -> link;
                free(temp);
                temp = temp1;
            }
        }
    }
    return SUCCESS;
}
