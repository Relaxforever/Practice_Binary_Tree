//
// Created by Fc on 30/11/2019.
//
#include "Binary.h"

void Postorder(Btree *tree)
{
    if (tree == NULL)
    {
    	return;
    }
    if (tree->left != NULL)
    {
        Postorder(tree->left);
    }
    if (tree->right != NULL)
    {
        Postorder(tree->right);
    }
    printf("%d ", tree->data);
}
