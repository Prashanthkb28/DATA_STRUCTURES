#include "tree.h"

int findmin(Tree_t * root)
{
    // if tree is empty
    if ( root ==  NULL)
        return FAILURE;
    // if non empty traverse left of root
    while(root->left != NULL )
    {
        root = root->left;
    }
    return root->data;
}

