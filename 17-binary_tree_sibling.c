#include "binary_trees.h"
/**
 * binary_tree_sibling - this finds the sibling of a node
 * @node: a pointer
 * Return: if there is no sibling, return 0.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
