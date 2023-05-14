#include "binary_trees.h"

/**
 *binary_tree_preorder - function that prints binarytree in pre-order traversal
 *@tree: is a pointer to the root node of the tree to traverse
 *@func: is a pointer to a function to call for each node.
 *The value in the node must be passed as a parameter to this function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
/*func to print it and then we use recursion to go to the other nodes*/
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
