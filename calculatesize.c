#include "Binary.h"
/*
* SizeofTree - calculates the size of a tree
* @tree: receives the tree
* Return: the size of the tree
*
**/

int SizeofTree(Btree *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	printf("im currently in the node %d\n", tree->data);
	return(SizeofTree(tree->left) + 1 + SizeofTree(tree->right));
}
