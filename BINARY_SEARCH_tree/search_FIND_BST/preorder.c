#include "tree.h"

/* Function to print the tree in pre order */
int preorder(Tree_t *root)
{
    if(root)
    {
        printf("%d ",root->data);            // visit parent
        preorder(root->left);                // visit left
        preorder(root->right);              // isit right
    }
}
