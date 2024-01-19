#include "main.h"

data_t selection(data_t *arr, data_t size )
{
    // traverse through array and compare
    for( int i=0; i < size-1; i++)
    {
        // find the minimum element in unsorted array
        int cur_min =i;
        for(int cur_item= i+1; cur_item < size; cur_item++)
        {
            // if the current element is less than current min 
            if( arr[cur_item] < arr[cur_min])
            {
                cur_min = cur_item;
            }
        }
            if( cur_min != i )
            {
                // swap the minimum ele found with first element
                int temp = arr[i];
                arr[i] = arr[cur_min];
                arr[cur_min] = temp;
            }
    }
    
}

