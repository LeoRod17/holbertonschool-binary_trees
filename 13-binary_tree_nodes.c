#include "binary_trees.h"

/**
 *binary_tree_nodes -it counts the nodes with at least 1 child in a binary tree
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *Return: the count of the nodes with a child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0, count1 = 0;

if (tree == NULL)
return (0);

count = binary_tree_nodes(tree->left);
count1 = binary_tree_nodes(tree->right);

count = count1 + count;
if (tree->left != NULL || tree->right != NULL)
{
return (count + 1);
}
return (count);
}
