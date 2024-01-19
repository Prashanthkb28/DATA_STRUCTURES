/* Documentation--------------------------------------
Name : PRASHANTH K B
DATE : 11/12/2023
Description : Implement the quick sort technique.Quick Sort is a Divide and Conquer algorithm. 
It picks an element as pivot and partitions the given array around the picked pivot
Samle execution :
Enter the size of an array                                                      
5                                                                               
Enter the array elements                                                        
5 4 3 2 1                                                                       
Sorted array is : 1 2 3 4 5
------------------------------------------------------------*/
#include "main.h"

/* Main Function */
int main()
{
	int i, limit, option;

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
	quick_sort(arr, 0, limit - 1);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}

