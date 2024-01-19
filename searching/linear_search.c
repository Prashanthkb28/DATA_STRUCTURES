/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements :");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    int data;
    printf("Enter the data to be find : ");
    scanf("%d",&data);
    int pos=0;
    while(pos < size)
    {
        if(arr[pos] == data)
        {
            printf("The element %d is found at %d position and index(%d) \n:",data,(pos+1),pos);
            return 0;
        }
        pos++;
     }
    printf("The element %d is not found in the array\n",data);
 
 
    return 0;
}

