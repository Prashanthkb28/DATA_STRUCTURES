/* Documentation--------------------------------------------------------------------------------------------
NAME : PRASHANTH K B
DATE : 12/14/2023
Description : WAF to merge and sort two linked list.
Sample Execution :
1. Insert at  List 1                                                            
2. Insert at list 2                                                             
3. Print list                                                                   
4. Sorted merge                                                                 
5. Exit                                                                         
Enter your choice: 1                                                            
Enter the data to be inserted at list 1 : 30                                    
1                                                                               
Enter the data to be inserted at list 1 : 10                                    
1                                                                               
Enter the data to be inserted at list 1 : 50                                    
2                                                                               
Enter the data to be inserted at list 2 : 20                                    
2                                                                               
Enter the data to be inserted at list 2 : 5                                     
2                                                                               
Enter the data to be inserted at list 2 : 35                                    
3                                                                               
List 1 -> 30 -> 10 -> 50 -> NULL                                                
List 2 -> 20 -> 5 -> 35 -> NULL
4                                                                               
INFO : Sorted merge Successfull                                                 
3                                                                               
5 -> 10 -> 20 -> 30 -> 35 -> 50 -> NULL
--------------------------------------------------------------------------------------------------------*/
#include "sll.h"

int main()
{
	//variable declaration
	Slist *head1 = NULL;
	Slist *head2 = NULL;
	int choice, data, temp = 0;

	printf("1. Insert at  List 1\n2. Insert at list 2\n3. Print list\n4. Sorted merge\n5. Exit\nEnter your choice: ");
	while (1)
	{
		//call function display menu
		scanf("%d", &choice);

		switch (choice)
		{

			//insert element at last
			case 1:
				printf("Enter the data to be inserted at list 1 : ");
				scanf("%d", &data);

				if (insert_at_last(&head1, data) == FAILURE)
					printf("INFO: Failed to Inserting the new data at last..try again\n");
				break;

			case 2:

				printf("Enter the data to be inserted at list 2 : ");
				scanf("%d", &data);

				if (insert_at_last(&head2, data) == FAILURE)
					printf("INFO: Failed to Inserting the new data at last..try again\n");
				break;

			case 3:
				if (temp == 0)
				{
					printf("\nList 1 -> ");
					print_list(head1); // print list_1
					printf("\n\nList 2 -> ");
					print_list(head2); // print list_2
					break;
				}
				else
					print_list(head1);
				break;

			case 4:
			 
				if (sorted_merge(&head1, &head2) == SUCCESS)
				{
				    temp = 1;
					printf("INFO : Sorted merge Successfull\n");
				}
				else
					printf("INFO : Both list are Empty\n");

				break;

			case 5 :
				return SUCCESS;

			default:
				printf("\nEnter the proper choice\n");

		}

	}

	return 0;
}		

