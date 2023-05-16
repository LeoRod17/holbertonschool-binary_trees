#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *Return: the balance of the node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int count = 0, count2 = 0;

if (tree == NULL)
{
return (0);
}
if (tree->left != NULL && tree->right != NULL)
{
count = 1 + binary_tree_balance(tree->left);
count2 = 1 + binary_tree_balance(tree->right);
}
if (tree->left == NULL && tree->right != NULL)
{
count = 1 - binary_tree_balance(tree->left);
count2 = 1 - binary_tree_balance(tree->right);
}

if (tree->left != NULL && tree->right == NULL)
{
count = 1 - binary_tree_balance(tree->left);
count2 = 1 - binary_tree_balance(tree->right);
}
return ((count + 1) - (count2 -1));
}
