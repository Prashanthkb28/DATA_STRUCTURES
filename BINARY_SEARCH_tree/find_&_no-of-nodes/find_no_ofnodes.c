#include "tree.h"

int total_nodes(Tree_t *root)
{
    // if the tree is empty return 0
    if( root == NULL )
    {
        return 0;
    }
    
    int l = total_nodes( root -> left );
    int r = total_nodes( root -> right ); 
    
    return r+l+1;
}

