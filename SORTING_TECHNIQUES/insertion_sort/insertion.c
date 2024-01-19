#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
    int j,key;
    // start comparing from index 1 upto size
    for(int i=1; i<size; i++)
    {
        key=arr[i];    //  key element 
        j=i-1;
        /* compare the key with each element on the left of the  array*/
        while( j>=0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
    
}

