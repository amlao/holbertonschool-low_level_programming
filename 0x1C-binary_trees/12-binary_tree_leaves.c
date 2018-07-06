#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r, sum;

	if (!tree)
		return (0);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	sum = (l + r + 1);
	if (!(tree->left) && !(tree->right))
		sum++;
	return (sum);
}
