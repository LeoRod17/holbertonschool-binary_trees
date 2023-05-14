#include "binary_trees.h"

/**
 *binary_tree_depth - a function that measures the depth of a node in a binary tree
 *@tree: is a pointer to the node to measure the depth
 *Return: the depth of the node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

if (tree == NULL)
{
    return (0);
}
if (tree->parent == NULL)
{
return (0);
}
if (tree->left != NULL || tree->right != NULL)
{
return (1);
}
else
{
return (2);
}
}
