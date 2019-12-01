#include "Binary.h"
/*
* SizeofTree - calculates the size of a tree
* @tree: receives the tree
* Return: the size of the tree
*
**/

int SizeofTree(Btree *tree)
{
	int size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	size = SizeofTree(tree->left + 1 + SizeofTree(tree->right);
}
