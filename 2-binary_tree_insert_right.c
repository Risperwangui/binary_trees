#include "binary_tree.h"
/**
 * binary_tree_insert_right - this inserts a node as the right child
 * @parent: a pointer
 * @value: the value of the new node
 * Return: if the parent returns an error, null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodenew;

	if (parent == NULL)
		return (NULL);

	nodenew = binary_tree_node(parent, value);
	if (nodenew == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nodenew->right = parent->right;
		parent->right->parent = nodenew;
	}
	parent->right = nodenew;

	return (nodenew);
}
