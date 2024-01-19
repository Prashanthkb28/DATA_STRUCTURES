#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
    // check for the queue is full
    if( IsQueueFull( q ) == SUCCESS )
        return FAILURE;
        
    // update the front for the first time when queue is full
    if( q -> front == -1)
    {
        q -> front = 0;
    }
    // update the rear to add element
    q -> rear = (q -> rear + 1 ) % ( q -> capacity);
    q -> Que[q -> rear] = data;
    
    // increment the count after each element inserted into queue
    (q -> count)++;
    return SUCCESS;
}
