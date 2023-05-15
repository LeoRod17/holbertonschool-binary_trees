#include "binary_trees.h"

/**
 *binary_tree_size - a function that measures the size of a binary tree
 *@tree: is a pointer to the root node of the tree to measure the size
 *Return the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t count = 0, count1 = 0, count2 = 0;

if (tree == NULL)
return (0);
if (tree->left != NULL)
{
count1 = binary_tree_size(tree->left);
}
if (tree->right != NULL)
{
count2 = binary_tree_size(tree->right);
}
count = count1 + count2 + 1;
return (count);
}
