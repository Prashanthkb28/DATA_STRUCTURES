/* Documentation ---------------------------------------
NAME : PRASHANTH K B
DATE : 11/12/2023
Description : Implement the circulat queue using linked list
Sample Execution :
1. Enqueue                                                                      
2. Dequeue                                                                      
3. Print Queue                                                                  
4. Exit                                                                         
Enter the option : 1                                                            
Enter the element you want to insert : 10                                       
1                                                                               
Enter the element you want to insert : 20                                       
1                                                                               
Enter the element you want to insert : 30                                       
1                                                                               
Enter the element you want to insert : 40                                       
3                                                                               
Front -> 10 -> 20 -> 30 -> 40 <- Rear                                           
2                                                                               
INFO : Dequeue successfull                                                      
3                                                                               
Front -> 20 -> 30 -> 40 <- Rear 
----------------------------------------------------*/
#include "queue.h"

int main()
{
	Queue_t *front = NULL, *rear = NULL;

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
				if (enqueue(&front, &rear, data) == FAILURE)
				{
					printf("INFO : Queue full\n");
				}
				break;
			case 2:
				/* Function to dequeueue the queue */
				if (dequeue(&front, &rear) == FAILURE)
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
				print_queue(front, rear);
				break;
			case 4:
				return SUCCESS;
			default:
				printf("Invalid option !!!\n");
		}

	}
}
