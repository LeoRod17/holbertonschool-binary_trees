#include "binary_trees.h"

/**
 *counti - a function to count the left nodes
 *@tree: is a pointer to the root node of the tree to check
 *Return: the number of nodes
 */
int count(const binary_tree_t *tree)
{
int c = 0, c1 = 0, c2 = 0;

if (tree != NULL)
{
return (0);
}
if (tree != NULL)
{
c1 = count(tree->left);
c2 = count(tree->right);
}
c = c1 + c2 +1;
return (c);
}

/**
 *binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *@tree: is a pointer to the root node of the tree to check
 *Return: 0 if is not perfect and 1 if it is perfect 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int count1 = 0, count2 = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left != NULL && tree->right != NULL)
{
count1 =1 + count(tree->left);
count2 =1 + count(tree->right);
}
if (tree->left != NULL && tree->right == NULL)
{
return (0);
}
if (tree->right != NULL && tree->left == NULL)
{
return (0);
}

if (count1 != count2)
{
return (0);
}
else
{
return (count(tree->left) && count(tree->right));
}
return (1);
}
