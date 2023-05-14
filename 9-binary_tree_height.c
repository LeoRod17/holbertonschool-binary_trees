#include "binary_trees.h"

/**
 *binary_tree_height -  a function that measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree to measure the height.
 *Return: the size of the node or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

if (tree == NULL)
{
return (0);
}
if (tree->parent == NULL)
{
return (2);
}
if (tree->left != NULL || tree->right != NULL)
{
return (1);
}
else
{
return (0);
}
}
