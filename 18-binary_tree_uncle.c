#include "binary_trees.h"
/**
 * binary_tree_uncle - this finds the uncle of the node
 * @node: a pointer
 * Return: if a node does not have an uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
