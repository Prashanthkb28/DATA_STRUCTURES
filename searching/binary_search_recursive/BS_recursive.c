#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
    int mid;
    
    // if the first index is less than the last then perform binary search
    if( first <= last)
    {
        mid = (first + last)/2;            // calculate the middle index   
    
       // if the element is found at the middle index 
       if( arr[mid] == key)
       {
          return mid;              // return middle index
       }
       // if the key element is  less than the middle element 
      if( key < arr[mid])
      {
         last = mid - 1;                // search for left half
      }
      else
      {
         first = mid + 1;              // search for right half
      }
         binarySearch_recursive(arr, size, key, first, last);              //call recursive function
    }
    else
        return  DATA_NOT_FOUND;
}

