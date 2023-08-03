#include "binary_trees.h"
/**
 * binary_tree_nodes - this counts the nodes
 * @tree: a pointer
 * Return: if a tree is null, retuurn 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		node = node + (tree->left || tree->right) ? 1 : 0;
		node = node + binary_tree_nodes(tree->left);
		node = node + binary_tree_nodes(tree->right);
	}
	return (node);
}
