#include "tree.h"

/* Function to print the tree in post order */
int postorder(Tree_t *root)
{
    if (root)
    {
        postorder(root->left);                 // visit left
        postorder(root->right);                // visit right
        printf("%d ",root->data);            // visit parent
    }
}
