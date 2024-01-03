#include "binary_trees.h"
/**
 * binary_tree_sibling - Entry point
 * @node: input
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node && node->parent && node->parent->right && node == node->parent->left)
		return (node->parent->right);
	else if (node && node->parent && node->parent->left && node == node->parent->right)
	{
		return (node->parent->left);
	}
	return (NULL);
}
