#include "binary_trees.h"

/**
 *binary_tree_delete - a function to delete a binary tree
 *@tree: the binary tree that I want to erase
 */
void binary_tree_delete(binary_tree_t *tree)
{

binary_tree_t *temp;

if (tree != NULL)
{
temp = tree;
binary_tree_delete(temp->left);
binary_tree_delete(temp->right);
free(tree);
}
}
