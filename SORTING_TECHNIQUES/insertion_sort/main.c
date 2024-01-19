/* Documentation --------------------------------------------------
NAME : PRASHANTH K B
DATE : 12/12/2023
Description Implement the insertion sort.A Sorting Algorithm is used to rearrange a given array elements according to a comparison operator on the elements. 
Sample execution :
Enter the size of an array                                                      
5                                                                               
Enter the array elements                                                        
5 4 3 2 1                                                                       
Sorted array is : 1 2 3 4 5
---------------------------------------------------------------------*/
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
	insertion(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}

