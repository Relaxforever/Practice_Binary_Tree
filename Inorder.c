//
// Created by Fc on 30/11/2019.
//
#include "Binary.h"

void inorder(Btree *tree)
/*
* Algorithm Inorder(tree)
*  1. Traverse the left subtree, i.e., call Inorder(left-subtree)
*  2. Visit the root.
*  3. Traverse the right subtree, i.e., call Inorder(right-subtree)
*/
{
    if (tree == NULL)
    {
    	return;
    }
    if (tree->left != NULL)
    {
        inorder(tree->left);
    }
    printf("%d ", tree->data);
    if (tree->right != NULL)
    {
        inorder(tree->right);
    }
}
