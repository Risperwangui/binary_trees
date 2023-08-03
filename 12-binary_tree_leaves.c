#include "binary_trees.h"
/**
 * binary_tree_leaves - this counts the leaves in a binary tree
 * @tree: this is a pointer
 * Return: the number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size = size + (!tree->left && !tree->right) ? 1 : 0;
		size = size + binary_tree_leaves(tree->right);
		size = size + binary_tree_leaves(tree->right);
	}
	return (size);
}
