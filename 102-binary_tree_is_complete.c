#include "binary_trees.h"
/**
 * binary_tree_size - this counts the number of nodes
 * @root: the pointer
 * Return: the number of nodes
 */
size_t binary_tree_size(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + binary_tree_size(root->left) + binary_tree_size(root->right));
}

/**
 * is_complete_recursive - this is the helper function
 * @root: a pointer
 * @index: the index
 * @size: size of the node
 * Return: if the treeis complete, return 1
 */
int is_complete_recursive(const binary_tree_t *root, size_t index, size_t size)
{
	if (root == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete_recursive(root->left, 2 * index + 1, size) &&
			is_complete_recursive(root->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - this checks is the binary tree is complete
 * @tree: the pointer
 * Return: if the tree is NULL, return0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete_recursive(tree, 0, size));
}
