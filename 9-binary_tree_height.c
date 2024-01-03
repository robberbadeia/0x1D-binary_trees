#include "binary_trees.h"
/**
 * binary_tree_height - Entry point
 * @tree: input
 * Return: tree hight
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0;
	size_t right_count = 0;
	const binary_tree_t *node;

	node = tree;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		while (tree->left)
		{
			left_count++;
			tree = tree->left;
		}
		while (node->right)
		{
			right_count++;
			node = node->right;
		}
		if (left_count >= right_count)
			return (left_count);
		else
			return (right_count);
	}
}
