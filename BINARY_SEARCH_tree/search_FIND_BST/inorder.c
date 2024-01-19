#include "tree.h"

/* Function to print the data in in order printing */
int inorder(Tree_t *root)
{
    if (root)
    {
    
       
        inorder(root -> left);                      // visit the left
        printf("%d ",(root->data) );                //  visit parent and print
        inorder(root -> right);                      // visit right
    }
}
