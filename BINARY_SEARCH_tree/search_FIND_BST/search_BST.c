#include "tree.h"

/* Iteratively */
int search_BST(Tree_t * root, int data)
{
    // check for empty tree
    if( root == NULL )
        return FAILURE;
    // if the non empty tree
    Tree_t *temp = root;                   // create a local refernce to root
    while(temp != NULL)
    {
        // if the element to be searched is less than parent traverse left
        if( data < temp->data)                  
        {
            temp = temp->left;
        }
         // if the element to be searched is greater than parent traverse right
        else if( data > temp->data)
        {
            temp = temp->right;
        }
        else
        {
            // return element is not present in the tree
            return SUCCESS;
        }
    }
    return NOELEMENT;
}
