/* Documentation -----------------------------------------
NAME : PRASHANTH K B
DATE :30/11/2023
DESCRIPTION : Implement stack using array
Sample execution :
Enter the size of the stack: 3                                                  
1. Push                                                                         
2. Pop                                                                          
3. Display Stack                                                                
4. Peek(Element at Top)                                                         
5. Exit                                                                         
Enter your choice : 1                                                           
Enter the element to be pushed in stack : 10                                    
1                                                                               
Enter the element to be pushed in stack : 20                                    
1                                                                               
Enter the element to be pushed in stack : 30                                    
3                                                                               
Top -> 30 20 10 
--------------------------------------------------------*/
#include "stack.h"

int create_stack(Stack_t *stk, int size)
{
    stk->stack = malloc(sizeof(int) * size); // dynamic memory allocation for stack
    
    /*validating for dynamic memory allocated /not  */
    if(stk->stack == NULL)
    {
        return FAILURE;
    }
    
    /* set the capacity and top */
    stk -> capacity = size;
    stk -> top = -1;
    return SUCCESS;
}


int main()
{
	int choice, element, peek, size;
	Stack_t stk;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);
    
    create_stack(&stk, size);
	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\nEnter your choice : ");
    
	while (1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed in stack : ");
				scanf("%d", &element);
				if (Push(&stk, element) == FAILURE)
				{
					printf("INFO : Stack Full\n");
				} 
				break;
			case 2:
				if (Pop(&stk) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
				    printf("INFO : Pop operation is successfull\n");
				}
				break;
			case 3:
				Peep(stk);
				break;
			case 4:
				if ((peek = Peek(&stk)) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
					printf("INFO : Peek element is %d\n", peek);
				}
				break;
			case 5:
				return SUCCESS;
			default:
				printf("Invalid Choice.\n");
				break;
		}
	}
	return 0;
}
