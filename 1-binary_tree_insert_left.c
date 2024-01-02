#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child of another node
 * @parent: input
 * @value: input
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
	{
		return (NULL);
	}

	binary_tree_t *new_node = NULL;

	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = binary_tree_node(new_node, parent->left->n);
	}

	parent->left = new_node;

	return (new_node);
}