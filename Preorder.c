//
// Created by Fc on 30/11/2019.
//
#include "Binary.h"

void Preorder(Btree *tree)
{
    if (tree == NULL)
    {
    	return;
    }
    printf("%d ", tree->data);
    if (tree->left != NULL)
    {
        Preorder(tree->left);
    }
    if (tree->right != NULL)
    {
        Preorder(tree->right);
    }
}
