#include "Binary.h"

Btree *newNode(int data)
{
	Btree *node;

	if ((node = malloc(sizeof(Btree))) == NULL)
		return (NULL);
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

int main()
{
    Btree *root = newNode(1);
    /* This is what happens when you create the node with  data 1
     *               1
     *             /   \
     *           NULL  NULL
     */

    root->left = newNode(2);
    root->right = newNode(3);
    /* two and three become part of the nodes
     *                1
     *              /   \
     *             2     3
     */

    root->left->left = newNode(4);
    /* 4 becomes the left child of the left node(2)
     *                 1
     *            /         \
     *           2           3
     *         /   \       /   \
     *        4    NULL  NULL  NULL
     *      /   \
     *    NULL  NULL
     */
    root->left->right = newNode(5);

    printf("The inorder method gives: ");
    inorder(root);
    printf("\n");
    printf("The Preorder method gives: ");
    Preorder(root);
    printf("\n");
    printf("The Postorder method gives: ");
    Postorder(root);
    printf("\n");


    return (0);
}
