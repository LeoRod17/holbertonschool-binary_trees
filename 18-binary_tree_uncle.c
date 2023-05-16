#include "binary_trees.h"

/**
 **binary_tree_uncle - a function that finds the uncle of a node
 *@node:  is a pointer to the node to find the uncle
 *Return: must return a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *unc;

if (node == NULL)
{
return (NULL);
}

if (node->parent == NULL || node->parent->parent == NULL)
{
return (NULL);
}


if (node->parent->parent->left == node->parent)
{
if (node->parent->parent->right == NULL)
return (NULL);
else
unc = node->parent->parent->right;
}
if (node->parent->parent->right == node->parent)
{
if (node->parent->parent->left == NULL)
return (NULL);
else
unc = node->parent->parent->left;
}
return (unc);

}
