#include "binary_trees.h"

/**
 **binary_tree_sibling - a function that finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: the node that is the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *sib;

if (node == NULL)
return (NULL);

if (node->parent == NULL)
{
    return (NULL);
}


sib = malloc(sizeof(binary_tree_t));
if (sib == NULL)
{
return (NULL);
}

if (node->parent->left == node)
{
if (node->parent->right == NULL)
return (NULL);
else
sib = node->parent->right;
}
if (node->parent->right == node)
{
if (node->parent->left == NULL)
return (NULL);
else
sib = node->parent->left;
}
return (sib);
}
