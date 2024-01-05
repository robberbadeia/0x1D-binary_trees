#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Function that print the tree in prety way*/
void binary_tree_print(const binary_tree_t *);

/* Function that creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* Function that inserts a node as the left-child of another node*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* Function that inserts a node as the right-child of another node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* Function that deletes an entire binary tree */
void binary_tree_delete(binary_tree_t *tree);
/*  Function that checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);
/* Function that checks if a given node is a root */
int binary_tree_is_root(const binary_tree_t *node);
/* Function that goes through a binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* Function that goes through a binary tree using In-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* Function that goes through a binary tree using Post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* Function that measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);
/* Function that measures the depth of a node in a binary tree */
size_t binary_tree_depth(const binary_tree_t *tree);
/* Function that measures the size of a binary tree */
size_t binary_tree_size(const binary_tree_t *tree);
/* Function that checks if a binary tree is full */
int binary_tree_is_full(const binary_tree_t *tree);
/* Function that checks if a binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* Function that finds the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* Function that finds the uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
/* Function that counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* Function that counts the nodes with at least 1 child in a binary tree */
size_t binary_tree_nodes(const binary_tree_t *tree);
#endif
