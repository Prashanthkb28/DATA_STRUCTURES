#include "tree.h"

extern int status;
/* Function to delete the node  */
Tree_t * delete_BST(Tree_t * root, int data)
{
    int flag =0;
    Tree_t *temp = root;
    Tree_t *prev = root;
    while( temp )
    {
        // if the data is in the root node
        if( temp->data == data )
        {
            break;
        }
        else if( temp ->data > data)
        {
            flag =0;
            prev = temp;
            temp = temp->left;
        }
        else
        {
            flag =1;
            prev = temp;
            temp = temp->right;
        }
        
    }
    if( temp  == NULL )
    {
        status = -2;
        return root;
    }
    
    if(temp ->left == NULL && temp->right == NULL)
    {
        free(temp);
        if(flag ==0)
        {
            prev->left = NULL;
        }
        else
        {
            prev -> right = NULL;
        }
        status =0;
    }
    else if(temp ->left != NULL && temp->right == NULL)
    {
    
        if(flag ==0)
        {
            prev->left = temp->left;
        }
        else
        {
            prev -> right = temp->left;
        }
        free(temp);
        status =0;
    }
   else if(temp ->left == NULL && temp->right != NULL)
    {
    
        if(flag ==0)
        {
            prev->left = temp->right;
        }
        else
        {
            prev -> right = temp->right;
        }
        free(temp);
        status =0;
    }
    else
    {
        int r_min = findmin(temp->right);
        delete_BST(root,r_min);
        temp->data =r_min;
        status =0;
    }
    return root;
}
