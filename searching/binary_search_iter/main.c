/* Documentation ----------------------------------------------------------------
Name :PRASHANTH KB
DATE : 07/12/2023
Description : Implement the binary serach using iterative method
Sample output :
Enter the size of an array                                                      
5                                                                               
Enter the elements of an array                                                  
1 2 3 4 5                                                                       
Enter the key to search                                                         
4                                                                               
INFO : Key found at the position 3   
*/

#include "main.h"

/* Main Function */
int main()
{

    /* Declaring the variables */
    data_t option, res, key, size;
    
    /* Reading the number of elements from the user */
    printf("Enter the size of an array\n");
    scanf("%d", &size);
    
    data_t arr[size];
    /* Sorting the elements for binary search */
    printf("Enter the elements of an array\n");
    for (int i = 0; i < size; i++)
    {
	    scanf("%d", &arr[i]);
    }

    printf("Enter the key to search\n");
	scanf("%d", &key);

	/* Calling the function to search the element */
	if ((res = binarySearch_iterative(arr, size, key)) == DATA_NOT_FOUND)
	{
	    printf("INFO : Key not found\n");
	}
	else
	{	
	    printf("INFO : Key found at the position %d\n", res);
	}
	
    return 0;
}

