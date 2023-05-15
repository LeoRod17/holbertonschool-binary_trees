#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree:a pointer to the root node of the tree to count the number of leaves
 *Return: the amount of leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

size_t count = 0, count1 = 0;

if (tree == NULL)
return (0);

count = binary_tree_leaves(tree->left);
count1 = binary_tree_leaves(tree->right);

count = count1 + count;
if (tree->left == NULL && tree->right == NULL)
{
return (count + 1);
}
return (count);
}
