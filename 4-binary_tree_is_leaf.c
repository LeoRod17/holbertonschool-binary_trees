#include "binary_trees.h"

/**
 *binary_tree_is_leaf - a function that check if the node is a leaf or not
 *@node: the node of the tree
 *Return: the function returns a 0 on fail or 1 on success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

if (node->left == NULL && node->right == NULL)
{
return (1);
}
else
{
return (0);
}
}
