#include "queue.h"

int IsQueueFull(Queue_t *q)
{
    // if the count and size of queue is equal then queue is full
    if( q -> capacity == q -> count) 
    {
        return SUCCESS;
    }
    else
    {
        return FAILURE;
    }
}

int IsQueueEmpty(Queue_t *q)
{
   // if the count is zero then queue is empty
   if( q -> count == 0)
   {
       return SUCCESS;
   }
   else
   {
       return FAILURE;
   }
}
