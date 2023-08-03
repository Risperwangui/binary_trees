#include "binary_trees.h"
/**
 * binary_tree_balance - this measures the balance factor
 * @tree: a pointer
 * Return: if the tree is null, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - this measures the height of a binary tree.
 * @tree: a pointer
 * Return: if a tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t length = 0, height = 0;

		length = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((length > height) ? length : height);
	}
	return (0);
}
