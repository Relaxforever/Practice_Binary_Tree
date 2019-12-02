#include "Binary.h"
/*
* HeightofTree - calculates the size of a tree
* @tree: receives the tree
* Return: the size of the tree
*
**/

void eachlevel(Btree *tree,int cont)
{
	if (tree == NULL)
		return;
	if (cont == 1)
		printf("%d\n", tree->data);
	else
	{
		if (cont > 1)
		{
			eachlevel(tree->left, cont - 1);
			eachlevel(tree->right, cont - 1);
		}
	}
}
void levelorder(Btree *tree)
{
	int cont;
	int height;
	
	if (tree == NULL)
		return;

	height = HeightofTree(tree);
	for (cont = 1; cont <= height; cont++)
	{
		eachlevel(tree, cont);
	}
}
