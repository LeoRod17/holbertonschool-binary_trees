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
free(temp);
return (NULL);
}

temp->n = value;
temp->parent = parent;

if (parent == NULL)
{
temp->left = NULL;
temp->right = NULL;

}

if (parent->left != NULL && parent->right != NULL)
{
return (NULL);
}
if (parent->left == NULL, parent->right == NULL)
parent->left->n = value;
if (parent->left != NULL)
parent->right->n = value;
free(temp);
return (parent);
}
