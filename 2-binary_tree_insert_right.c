#include "binary_trees.h"

#include "binary_trees.h"

/**
 **binary_tree_insert_left - a tree that inserts on the left-child of a node
 *@parent: is a pointer to the node to insert the left-child in
 *@value: is the value to store in the new node
 *Return: the binary tree with the changes
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *temp;

if (parent == NULL)
return (NULL);

temp = malloc(sizeof(binary_tree_t));
if (temp == NULL)
return (NULL);

temp->n = value;
temp->parent = parent;
temp->right = NULL;
temp->left = NULL;

if (parent->right != NULL)
{
temp->right = parent->right;
parent->right->parent = temp;
}

parent->right = temp;
return (parent);
}
