#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)
{
    // check for empty queue
    if(  IsQueueEmpty( q ) == SUCCESS)
            return FAILURE;
            
    // update the front and decrement the count
    q -> front = (q -> front + 1 ) % (q -> capacity);
    (q -> count)--;
    return SUCCESS;

}
