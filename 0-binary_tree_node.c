#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *temp;

temp = malloc(sizeof(binary_tree_t));
if (temp == NULL)
{
return (NULL);
}

temp->n = value;
temp->left = NULL;
temp->right = NULL;
temp->parent = parent;
return (temp);
}
