#include "binary_trees.h"
/**
 * binary_tree_leaves - Entry point
 * @tree: input
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (2);
	if (tree->left || tree->right)
		return (1);
	return (0);
}
