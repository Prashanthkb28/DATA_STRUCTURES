#include "tree.h"

int find_height(Tree_t *root)
{
    // if the tree is empty return 0 indicating 0 nodes
    if( root == NULL )
    {
        return 0;
    }
    
    // if the non empty tree
    int l = find_height( root -> left );
    int r = find_height( root -> right );
    
     if( l < r )
     {
         return r+1;
     }
     else
     {
         return l+1;
     }
    
}

