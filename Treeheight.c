#include "Binary.h"
/*
* HeightofTree - calculates the size of a tree
* @tree: receives the tree
* Return: the size of the tree
*
**/

int HeightofTree(Btree *tree)
{
	int leftH = 0;
	int RightH = 0;
	if (tree == NULL)
	{
		return (0);
	}
	leftH = HeightofTree(tree->left);
	RightH = HeightofTree(tree->right);
	printf("I'm currently in node %d\n", tree->data);
	if (leftH < RightH)
		return (RightH + 1);
	return (leftH + 1);
}
