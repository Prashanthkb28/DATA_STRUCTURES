/* Documentation ----------------------------------
NAME : PRASHANTH K B
DATE : 11/12/2023
Description : A Sorting Algorithm is used to rearrange a given array elements according to a comparison operator on the elements. 
Sample execution :
Enter the size of an array                                                      
5                                                                               
Enter the array elements                                                        
9 3 1 0 2                                                                       
Sorted array is : 0 1 2 3 9 
----------------------------------------------------------*/
#include "main.h"

/* Main Function */
int main()
{
	int i, limit, option;

	/* Scanning the size */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	/* Declaring the array with size */
	data_t arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	    /* Scanning the array elements */
		scanf("%d", &arr[i]);
	}
		
	/* Calling the function to bubble sort */
	bubble(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}

