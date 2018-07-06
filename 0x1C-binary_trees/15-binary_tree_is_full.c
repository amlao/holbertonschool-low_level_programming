#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ls, rs, tg;

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