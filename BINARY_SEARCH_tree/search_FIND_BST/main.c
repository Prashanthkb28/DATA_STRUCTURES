/* Docmentation ---------------------------------------------------------------------------------
NAME : PRASHANTH K B
DATE : 20/12/2023
Description : Write a Program to search given data and to find max data node from the BST
1.Add the insert() to insert elements in the bst 
2. search()
3.Add the inorder(), preorder(), postorder() to print the elements of bst
sample execution :
1. insert BST                                                                   
2. in order Traversal                                                           
3. pre order Traversal                                                          
4. post order Traversal                                                         
5. BST Search                                                                   
6. Find minimum                                                                 
7. Find maximum                                                                 
Enter the option: 1                                                             
Enter the data to insert into the BST : 100                                     
1                                                                               
Enter the data to insert into the BST : 20                                      
1                                                                               
Enter the data to insert into the BST : 30                                      
1                                                                               
Enter the data to insert into the BST : 5                                       
1                                                                               
Enter the data to insert into the BST : 60                                      
1                                                                               
Enter the data to insert into the BST : 30                                      
INFO : Duplicate found                                                          
1                                                                               
Enter the data to insert into the BST : 10                                      
2                                                                               
5 10 20 30 60 100 
3                                                                               
100 20 5 10 30 60                                                               
4                                                                               
10 5 60 30 20 100                                                               
5                                                                               
Enter the element to be searched: 60                                            
INFO : Data found                                                               
7                                                                               
INFO : Maximum value in the tree is 100 
6                                                                              
INFO : Minimum value in the tree is 5
------------------------------------------------------------------------------------*/
#include "tree.h"

int main()
{
	/* Intializing the root with NULL */
	Tree_t *root = NULL;
	int result;
	/* Declaring the variables */
	int option, data;

	//printf("1. insert BST\n2. in order Traversal\n3. pre order Traversal\n4. post order Traversal\n5. BST Search\n6. Find minimum\n7. Find maximum\n");
	//printf("Enter the option: ");
	while (1)
	{
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				/* Reading the data from the user */
				printf("Enter the data to insert into the BST : ");
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
				/* Function to Printing the data in pre-order form */
				preorder(root);
				printf("\n");
				break;
			case 4:
				/* Function to Printing the data in post-order form */
				postorder(root);
				printf("\n");
				break;
			
			case 5:
				printf("Enter the element to be searched: ");
				scanf("%d", &data);
				result = search_BST(root, data);
				if (result == NOELEMENT)
				{
					printf("INFO : Data not found\n");
				}
				else if (result == FAILURE)
				{
				    printf("INFO : Tree is empty\n");
				}
				else
				{
					printf("INFO : Data found\n");
				}

				break;
			case 6: 
				result = findmin(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Minimum value in the tree is %d\n", result);	
				}
				break;
			case 7: 
				result = findmax(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Maximum value in the tree is %d\n", result);	
				}	
				break;
			case 8:
			    return SUCCESS;
			
			default:
				printf("Invalid Option\n");
		}

		/* If user press y means loop will continue */
	}
	return 0;
}
