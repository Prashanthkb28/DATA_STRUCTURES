#include "hash.h"

void create_HT(hash_t *HT, int size)
{
    /* creating the array of structures as the tables */
    // create a table of size 
    for(int i=0; i < size; i++)
    {
        HT[i].index = i;       // intilaize the key / index to the table
        HT[i].value = -1;     // intialize all the values in the table with -1
        HT[i].link = NULL;     // make the link of the particular structure with NULL
    }
}
