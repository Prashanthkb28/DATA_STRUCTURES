#include "main.h"

data_t bubble(data_t *arr, int size )
{
    // bubble sort logic
    for(int i=0; i< size-1; i++)
    {
        for(int j=0; j< size-i-1; j++)
        {
            if( arr[j] > arr[j+1] )
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

