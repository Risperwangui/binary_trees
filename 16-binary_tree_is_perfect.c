#include "binary_trees.h"
/**
 * is_leaf - this checks if a node is a leaf or a binary tree
 * @node: a pointer
 * Return: If the node is a leaf, return1.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - this returns the depths of a node
 * @tree: a pointer
 * Return: the depth
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - this returns a leaf of a binary tree.
 * @tree: a pointer
 * Return: the pointer to the first leaf
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is _perfect_recursive - this checks if a binary tree is perfect
 * @tree: a pointer
 * @leaf_depth: the depth
 * @level: the level
 * Return: if the tree is perfect, return 1.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, left_depth, level + 1) && 
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - this checks if a binary tree is perfect
 * @tree: a pointer
 * Return: if thr trr is not perfect, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_lead(tree)), 0));
}
