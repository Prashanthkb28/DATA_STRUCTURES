#include "main.h"

/* Function to check the number is minimum or maximum to decide the position */
void max_heap(int *heap, int index, int size)
{
    // calculating the left and right child index
    int l = 2*index + 1;
    int r = 2*index + 2;
    int large;
    // left element 
    if( l < size  && heap[index] < heap[l] )
    {
        large = l;
    }
    else
    {
        large = index;
    }
    // right element
    if( r < size && heap[r] > heap[large] )
    {
        large = r;
    }
    //if the index and large are not same then swap and call the function again recursively untill index and large are equal
    if( index != large )
    {
        int temp = heap[index];
        heap[index] = heap[large];
        heap[large] = temp;
        max_heap(heap,large,size);
    }
}

