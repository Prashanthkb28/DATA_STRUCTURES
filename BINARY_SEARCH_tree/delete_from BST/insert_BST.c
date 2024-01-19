#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    // allocate the node
    Tree_t *new = malloc( sizeof(Tree_t) );
    if(new == NULL)
        return FAILURE;
        
    // update the data and links
    new -> data = data;
    new -> left = NULL;
    new -> right = NULL;
    
    // if the tree is empty
    if( *root == NULL)
    {
        *root = new;
        return SUCCESS;
    }
    
    // if non empty tree
    int flag =0;
    Tree_t *temp = *root;
    Tree_t *parent;
    // traverse 
    while(temp != NULL)
    {
        parent = temp;
        // if the data is less than the parent node traverse left
        if( data < temp->data)
        {
            temp = temp -> left;
            flag =1;
            
        }
        // if the data is greater than the parent node traverse right
        else if(data > temp -> data)
        {
            temp = temp -> right;
            flag =0;
            
        }
        else
        {
            return DUPLICATE;
        }
    }
    if( flag )
    {
        parent -> left = new;
    }
    else
    {
        parent -> right = new;
    }
    return SUCCESS;
}
