#include "tree.h"

int findmin(Tree_t * root)
{
    // check for empty tree
    if(root == NULL)
        return FAILURE;
        
    /* if non empty tree */
    // traversal through left of root till last node get minimum value 
    while( root -> left != NULL )
    {
        root = root->left;
    }
    return root ->data;
}

