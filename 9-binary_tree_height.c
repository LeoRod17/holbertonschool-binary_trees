#include "binary_trees.h"

/**
 *binary_tree_height -  a function that measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree to measure the height.
 *Return: the size of the node or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t count = 0, count2 = 0;

if (tree == NULL)
{
return (0);
}
if (tree->left != NULL || tree->right != NULL)
{
count = 1 + binary_tree_height(tree->left);
count2 = 1 + binary_tree_height(tree->right);
}
if (count > count2)
return (count);
else
return (count2);
}
