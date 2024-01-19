/* Documentation -----------------------------------------------------------
Name : PRASHANTH K B
DATE : 07/12/2023
Description : Implement the circular queue using array
Sample execution :
Enter the size of the queue : 5                                                 
1. Enqueue                                                                      
2. Dequeue                                                                      
3. Print Queue                                                                  
4. Exit                                                                         
Enter the option : 1                                                            
Enter the element you want to insert : 1                                        
1                                                                               
Enter the element you want to insert : 2                                        
1                                                                               
Enter the element you want to insert : 3                                        
1                                                                               
Enter the element you want to insert : 4                                        
1                                                                               
Enter the element you want to insert : 5                                        
2                                                                               
INFO : Dequeue successfull                                                      
3                                                                               
Front -> 2 3 4 5 <- Rear                                                        
  
------------------------------------------------------------------------*/
#include "queue.h"

int create_queue(Queue_t *q, int size)
{
    /* alloacte the memory */
    q->Que = malloc(sizeof(int)*size);
    // check for memory allocated succesfuly / not
    if( (q -> Que) == NULL)
        return FAILURE;
    q -> front = -1;
    q -> rear = -1;
    q -> capacity = size;
    q -> count = 0;      // keep track of number of elements in the circular queue
    return SUCCESS;
}

int main()
{
	Queue_t q;
	int size;
	printf("Enter the size of the queue : ");
	scanf("%d", &size);
	if (create_queue(&q, size) == FAILURE)
	{
	    printf("INFO : Queue not created\n");
	    return FAILURE;
	}

	char ch;
	int choice, data;
	printf("1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\nEnter the option : ");
	while (1)
	{
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				/* Function to Enqueue the Queue */
				printf("Enter the element you want to insert : ");
				scanf("%d", &data);
				if (enqueue(&q, data) == FAILURE)
				{
					printf("INFO : Queue full\n");
				}
				break;
			case 2:
				/* Function to dequeueue the queue */
				if (dequeue(&q) == FAILURE)
				{
					printf("INFO : Queue is empty\n");
				}
				else
				{
					printf("INFO : Dequeue successfull\n");
				}
				break;
			case 3:
				/* Function to print the queue */
				print_queue(q);
				break;
			case 4:
				return SUCCESS;
			default:
				printf("Invalid option !!!\n");
		}

	}
}
