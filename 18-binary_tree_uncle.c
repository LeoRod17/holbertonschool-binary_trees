#include "binary_trees.h"

/**
 **binary_tree_uncle - 
 *@node:  is a pointer to the node to find the uncle
 *Return: must return a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *unc;

if (node == NULL)
return (NULL);

if (node->parent == NULL && node->parent->parent)
{
    return (NULL);
}


unc = malloc(sizeof(binary_tree_t));
if (unc == NULL)
{
return (NULL);
}

if (node->->parent->left == node)
{
if (node->parent->parent->right == NULL)
return (NULL);
else
unc = node->parent->parent->right;
}
if (node->parent->right == node)
{
if (node->parent->left == NULL)
return (NULL);
else
unc = node->parent->left;
}
return (unc);

}
