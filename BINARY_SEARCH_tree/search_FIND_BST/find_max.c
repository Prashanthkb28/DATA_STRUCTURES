#include "tree.h"

int findmax(Tree_t * root)
{
    // check for empty tree
    if( root == NULL)
        return FAILURE;
    // if non empty tree
    // traverse through the right most node to get max value
    while( root -> right != NULL)
    {
        root = root -> right;
    }
    return root->data;
}

