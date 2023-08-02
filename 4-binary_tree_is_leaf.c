#include "binary_trees.h"
/**
 * binary_tree_is_leaf - this checks if a node is a leaf
 * @node: this is the pointer
 * Return: if the node is a leaf, return 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
