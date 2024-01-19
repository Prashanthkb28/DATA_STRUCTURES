#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
    // allocate the memory
    Queue_t *new = malloc(sizeof(Queue_t) );
    // check for successfull allocation of memory
    if(new == NULL)
        return FAILURE;
    // update the data and link filed of new node
    new->data = data;
    new->link = NULL;
    
    // if the list is empty
    if( *rear == NULL )
    {
        (*rear) = (*front) = new;
        (*rear)->link =*front;
        return SUCCESS;
    }
    // update the rear if list non empty
    (*rear)->link = new;
    *rear = new;
    (*rear)->link = *front;
    return SUCCESS;
}
