#include "main.h"


int merge_sort(int *array, int narray)
{
    // if the size of the dividing array is 1 then stop dividing
    if( narray == 1 )
        return 0;
        
    // calculate the mid
    int mid = narray/2;
    
    // alloacte the memory for left sub array
    int *left_SA = malloc(sizeof(int)*mid);
    
    // check for successfull allocation of memory
    if( left_SA == NULL)
         return FAILURE;
         
    // copy the elements from main array to left_SA array
    for( int i=0;i < mid; i++)
    {
        left_SA[i] = array[i];
    }
    
    // allocate the memory for right sub array
    int *right_SA = malloc(sizeof(int)*(narray -mid) );
    
    // check for successfull allocation of memory
    if( right_SA == NULL)
         return FAILURE;
         
    // copy the elements from main array to left_SA array
    for( int i=mid; i < narray; i++)
    {
        right_SA[i-mid] = array[i];
    }
    merge_sort(left_SA, mid);
    merge_sort(right_SA, (narray - mid) );
    merge(array, narray, left_SA, mid, right_SA, (narray - mid) );

}

