#include "binary_trees.h"
/**
 * binary_tree_size - this measures the size of the binary tree
 * @tree: a pointer
 * Return: if the tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeleft, sizeright;

	if (tree == NULL)
		return (0);

	sizeright = binary_tree_size(tree->right);
	sizeleft = binary_tree_size(tree->left);

	return (sizeright + sizeleft + 1);
}
