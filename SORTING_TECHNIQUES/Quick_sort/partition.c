#include "main.h"

/* Function to partition the array */
int partition(int *arr, int first, int last)
{
    int pivot = first , p = first +1 , q = last;
    // compare untill p <=q
    while( p <= q)
    {
        // left array
        // compare the piviot index element with p index values
        while( arr[pivot] >= arr[p])
        {
            p++;
        }
        //   right array
        // compare the pivoit index with q index values
        while( arr[q] > arr[pivot])
        {
            q--;
        }
        // if the p index  less than the q index , then swap values
        if( p < q)
        {
            int temp =arr[p];
            arr[p] = arr[q];
            arr[q] = temp;
        }
    }
    if( q != pivot)
    {
    // swap pivot and q
      int temp = arr[pivot];
      arr[pivot] = arr[q];
      arr[q] = temp;
    }
    
    return q;   // where its pointing to middle index of array
}

