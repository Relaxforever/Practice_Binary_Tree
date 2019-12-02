//
// Created by Fc on 30/11/2019.
//

#ifndef BINARY_TREES_BINARY_H
#define BINARY_TREES_BINARY_H
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Btree;

void inorder(Btree *tree);
void Preorder(Btree *tree);
void Postorder(Btree *tree);
int SizeofTree(Btree *tree);
int HeightofTree(Btree *tree);
void levelorder(Btree *tree);
void eachlevel(Btree *tree, int cont);
#endif //BINARY_TREES_BINARY_H
