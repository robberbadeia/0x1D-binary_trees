#include "binary_trees.h"
/**
 * binary_tree_depth - Entry point
 * @tree: input
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree && tree->parent)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}
/**
 * is_perfect - Entry point
 * @node: input
 * @d: input
 * @level: input
 * Return: int
 */
int is_perfect(const binary_tree_t *node, size_t d, int level)
{
	if (!node)
		return (1);
	if (node->left == NULL && node->right == NULL)
		return (d + 1);
	if (node->left == NULL || node->right == NULL)
		return (0);
	return (is_perfect(node->left, d, level + 1)
			&& is_perfect(node->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - Entry point
 * @tree: input
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = binary_tree_depth(tree);

	return (is_perfect(tree, depth, 0));
}
