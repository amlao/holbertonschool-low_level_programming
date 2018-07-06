#include "binary_trees.h"
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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lb, rb, bal;

	if (!tree)
		return (0);
	lb = binary_tree_height(tree->left);
	rb = binary_tree_height(tree->right);
	bal = lb - rb;
	return (bal);
}
