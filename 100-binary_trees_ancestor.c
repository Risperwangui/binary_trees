#include "binary_trees.h"
/**
 * binary_trees_ancestor - this finds the lowest common ancestor
 * @first: pointer
 * @second: pointer
 * Return: a pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *dad, *mom;

	for (dad = first; dad; dad = dad->parent)
		for (mom = second; mom; mom = mom->parent)
			if (dad == mom)
				return ((binary_tree_t *)dad);
	return (NULL);
}
