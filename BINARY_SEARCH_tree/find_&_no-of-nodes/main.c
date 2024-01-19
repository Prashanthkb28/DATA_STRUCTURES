/* Documentation---------------------------------------------------------------------------------------------
NAME : PRASHANTH K B
DATE : 25/12/2023
Description : Write a Program to find the height and the number of nodes of tree
Sample Execution :
1. insert BST                                                                   
2. in order Traversal                                                           
3. Find the total nodes                                                         
4. Find height                                                                  
5.Exit                                                                          
Enter the option: 1                                                             
Enter the data to insert into the BST : 50                                      
1                                                                               
Enter the data to insert into the BST : 20                                      
1                                                                               
Enter the data to insert into the BST : 25                                      
1                                                                               
Enter the data to insert into the BST : 55                                      
1                                                                               
Enter the data to insert into the BST : 56                                      
2                                                                               
20 25 50 55 56                                                                  
3                                                                               
INFO : Total no.of nodes are 5                                                  
4                                                                               
INFO : Height of the tree is 3 
-------------------------------------------------------------------------------------------------------------*/
#include "tree.h"

int status;

int main()
{
	/* Intializing the root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the variables */
	int option, data;

	//printf("1. insert BST\n2. in order Traversal\n3. Find the total nodes\n4. Find height\n5.Exit\n");
	//printf("Enter the option: ");
	while (1)
	{
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				/* Reading the data from the user */
				//printf("Enter the data to insert into the BST : ");
				scanf("%d", &data);

				/* Calling the function to insert the element */
				if ((result = insert_into_BST(&root, data)) == DUPLICATE)
				{
					printf("INFO : Duplicate found\n");
				}
				else if (result == FAILURE)
				{
					printf("INFO : Node not created\n");
				}
				break;
			case 2:
				/* Function to Printing the data in in-order form */
				inorder(root);
				printf("\n");
				break;

			case 3:
				/* Function to delete the data from the tree */
				
			    if ((result = total_nodes(root)) == 0)
			    {
			        printf("INFO : Tree is empty\n");
			    }
				else
				    printf("INFO : Total no.of nodes are %d\n", result);
			            
				break;
			case 4:
			
			    if ((result = find_height(root)) == 0)
			    {
			        printf("INFO : Tree is empty\n");
			    }
			    else
			    {
			        printf("INFO : Height of the tree is %d\n", result);
			    }
			    break;
			case 5:
				
			    return SUCCESS;
				break;
			
			default:
				printf("Invalid Option\n");
		}

		/* If user press y means loop will continue */
	}
	return 0;
}
