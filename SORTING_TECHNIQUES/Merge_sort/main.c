/* Documentation----------------------------------------------------------------------
NAME : PRASHANTH KB
DATE : 12/12/2023
Description : Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves
Sample Execution :
Enter the size of an array                                                      
5                                                                               
Enter the array elements                                                        
5 4 3 2 1                                                                       
Sorted array is : 1 2 3 4 5
--------------------------------------------------------------------------------------*/
#include "main.h"

/* Main Function */
int main()
{
	int i, limit;

	/* Scanning the size */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	/* Declaring the array with size */
	int arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	    /* Scanning the array elements */
		scanf("%d", &arr[i]);
	}
		
	/* Calling the function to bubble sort */
	merge_sort(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}

