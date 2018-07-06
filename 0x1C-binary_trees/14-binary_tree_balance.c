#include "binary_trees.h"
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
	rb = binary_tree_heihgt(tree->right);
	bal = lb - rb;
	return (bal);
}
