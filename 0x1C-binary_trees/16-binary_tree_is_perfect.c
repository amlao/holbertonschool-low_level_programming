#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int *left, *right;

	if (!tree)
		return (0);
	left = tree->left;
	right = tree->right;
	if (!left || !right)
		return (0);
	if (binary_tree_is_full(tree))
		if (binary_tree_height(left) == binary_tree_height(right))
			return (1);
	return (0);
}
