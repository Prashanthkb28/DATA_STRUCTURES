/* Documentation--------------------------------------------------------------
NAME : PRASHANTH K B
DATE : 21/12/2023
Description:
Hashing is a technique or process of mapping keys, values into the hash table by using a hash function
Sample execution :
Enter the size of arr: 5                                                        
1. Insert data in HT                                                            
2. Search data in HT                                                            
3. Delete data from HT                                                          
4. Destroy HT                                                                   
5. Display HT                                                                   
6. Exit                                                                         
Enter you choice : 1                                                            
Enter the data: 10                                                              
1                                                                               
Enter the data: 30                                                              
1                                                                               
Enter the data: 33                                                              
1                                                                               
Enter the data: 3                                                               
1                                                                               
Enter the data: 4                                                               
1                                                                               
Enter the data: 5                                                               
1                                                                               
Enter the data: 6                                                               
1                                                                               
Enter the data: 4
Enter the data: 44                                                              
1                                                                               
Enter the data: 11                                                              
5                                                                               
[0] - 10 -> 30 -> 5                                                             
[1] - 6 -> 11                                                                   
[2] - -1    
[3] - 33 -> 3                                                                   
[4] - 4 -> 44                                                                   
30                                                                              
Invalid input                                                                   
2                                                                               
Enter the data: 30                                                              
INFO : 30 is found at the index 0                                               
3                                                                               
Enter the data: 30                                                              
INFO : 30 is deleted successfully                                               
5                                                                               
[0] - 10 -> 5                                                                   
[1] - 6 -> 11                                                                   
[2] - -1                                                                        
[3] - 33 -> 3                                                                   
[4] - 4 -> 44 
4                                                                               
INFO: Hashtable deleted successfully                                            
5                                                                               
[0] - -1                                                                        
[1] - -1                                                                        
[2] - -1                                                                        
[3] - -1                                                                        
[4] - -1 
----------------------------------------------------------------------*/
#include"hash.h" 

int main()
{
	int size, data, choice, index;
	char opt;
	printf("Enter the size of arr: ");
	scanf("%d", &size);
	hash_t arr[size];
	create_HT(arr, size);
	
	printf("1. Insert data in HT\n2. Search data in HT\n3. Delete data from HT\n4. Destroy HT\n5. Display HT\n6. Exit\nEnter you choice : ");
	while(1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data: ");
				scanf("%d", &data);
				if(insert_HT(arr, data, size) == FAILURE)
				{
					printf("INFO : Insert data is Failure\n");
				}
				
				break;

			case 2:
				printf("Enter the data: ");
				scanf("%d", &data);
				if((search_HT(arr, data, size)) == DATA_NOT_FOUND)
				{
					printf("INFO : Data not found\n");
				}
				else
				{
					printf("INFO : %d is found at the index %d\n", data, data % size);
				}
				break;

			case 3:
				printf("Enter the data: ");
				scanf("%d", &data);
				if(delete_element(arr, data, size) == DATA_NOT_FOUND)
				{
					printf("INFO : Data is not found\n");
				}
				else
				{
					printf("INFO : %d is deleted successfully\n",data);
				}
				break;

			case 4:
				if(destroy_HT(arr,size) == SUCCESS)
				{
					printf("INFO: Hashtable deleted successfully\n");
				}
				else
				{
					printf("INFO: Delete hashtable is Failure\n");
				}
				break;

			case 5:
				display_HT(arr, size);
				break;
			case 6:
				return SUCCESS;

			default:
				printf("Invalid input\n");
		}
	}
}
