#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ls, rs;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	ls = binary_tree_is_full(tree->left);
	rs = binary_tree_is_full(tree->right);
	if (tree->left)
		ls++;
	if (tree->right)
		rs++;
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth, righth;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (0);
	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);
	if (lefth > righth)
		return (lefth + 1);
	return (righth +1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

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
