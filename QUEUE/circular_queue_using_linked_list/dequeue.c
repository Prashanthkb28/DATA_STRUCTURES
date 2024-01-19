#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    //check for list empty
    if(*front == NULL)
        return FAILURE;
        
    // if both front and rear points to same
    if( *rear == *front)
    {
        free(*front);
        *front = *rear = NULL;
    }
    else
    {
        *front = (*front) ->link;
        free((*rear)->link);
        (*rear)->link = *front;
    }
  return SUCCESS;
}
