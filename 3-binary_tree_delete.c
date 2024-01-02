#include "binary_trees.h"
/**
 * binary_tree_delete - Function that delete entire tree
 * @tree: input
 * Return: NONE
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
