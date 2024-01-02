#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node as
 * the right-child of another node
 * @parent: input
 * @value: input
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		new_node->right = binary_tree_node(new_node, parent->right->n);
	}

	parent->right = new_node;

	return (new_node);
}
