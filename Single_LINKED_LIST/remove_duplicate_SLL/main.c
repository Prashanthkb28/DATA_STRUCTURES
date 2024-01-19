/* Documentation --------------------------------------------------------------------------------------
NAME : PRASHANTH K B
DATE : 05/12/2023
Description : Write a function to remove the duplicate values present in the SLL.  note : don't sort the list
Sample execution :
1. to insert at last
2. To print the list                                                            
3. To remove the duplicates                                                     
4. Exit                                                                         
Enter your option : 1                                                           
Enter the number that you want to insert at last: 10                            
1                                                                               
Enter the number that you want to insert at last: 20                            
1                                                                               
Enter the number that you want to insert at last: 20                            
1                                                                               
Enter the number that you want to insert at last: 30                            
1                                                                               
Enter the number that you want to insert at last: 40                            
1                                                                               
Enter the number that you want to insert at last: 50                            
1                                                                               
Enter the number that you want to insert at last: 40                            
2                                                                               
10 -> 20 -> 20 -> 30 -> 40 -> 50 -> 40 -> NULL                                  
3                                                                               
INFO : Duplicates are removed Successfully                                      
2                                                                               
10 -> 20 -> 30 -> 40 -> 50 -> NULL 
--------------------------------------------------------------------------------------------------*/
#include "sll.h"

int main()
{
	int option, data;


	Slist *head = NULL; /* initialize the header to NULL */

	printf("\n1. To insert the last element\n2. To print the list\n3. To remove the duplicates\n4. Exit\nEnter your option : ");
	while(1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);

				/*insert_at_last function call*/
				if (insert_at_last(&head, data) == FAILURE) //pass by reference
				{
					printf("INFO : insert last failure\n");
				}
				break;

			case 2:
				/* print list function call*/
				print_list(head);
				break;
			case 3:
				if (remove_duplicates(&head) == FAILURE)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Duplicates are removed Successfully\n");
				}
				break;
			case 4:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}
