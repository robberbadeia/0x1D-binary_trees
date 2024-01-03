#include "binary_trees.h"
/**
 * binary_tree_height - Entry point
 * @tree: input
 * Return: tree hight
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	left_side = 0;
	right_side = 0;

	if (!tree)
		return (0);
	else
	{
		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
		if (left_side >= right_side)
		{
			return (left_side + 1);
		}
		else
		{
			return (right_side + 1);
		}
	}
}
