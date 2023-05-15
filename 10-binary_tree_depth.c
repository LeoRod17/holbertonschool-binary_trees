#include "binary_trees.h"

/**
 *binary_tree_depth -a function that returns the depth of a node in binary tree
 *@tree: is a pointer to the node to measure the depth
 *Return: the depth of the node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
{
return (0);
}
if (tree->parent != NULL)
{
count = binary_tree_depth(tree->parent) + 1;
}

return (count);
}
