#include "binary_trees.h"
/**
 * binary_tree_is_root - this checks if a node is a root
 * @node: a pointer
 * Return: if the node is a root, return 1.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
