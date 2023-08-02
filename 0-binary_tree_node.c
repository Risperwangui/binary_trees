#include "binary_trees.h"
/**
 * binary_tree_node - this creates the binary tree node
 * @parent: the pointer
 * @value: this is the value in the new node
 *
 * Return: if error occurs, print NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodenew;

	nodenew = malloc(sizeof(binary_tree_t));
	if (nodenew == NULL)
		return (NULL);

	nodenew->n = value;
	nodenew->parent = parent;
	nodenew->right = NULL;
	nodenew->left = NULL;

	return (nodenew);
}

