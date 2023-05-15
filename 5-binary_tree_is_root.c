#include "binary_trees.h"

/**
 *binary_tree_is_root - a function that determines if the node is a root
 *@node: the node to check if it is a root
 *Return: 0 or 1 if on fail or success
 */
int binary_tree_is_root(const binary_tree_t *node)
{

if (node == NULL)
return (0);


if (node->parent == NULL)
{
return (1);
}
else
return (0);
}
