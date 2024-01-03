#include "binary_trees.h"
/**
 * binary_tree_depth - Entry point
 * @tree: input
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}
