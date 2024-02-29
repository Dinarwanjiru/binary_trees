#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, or 0 if tree is NUll
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
		return (0);

	/* Count the nodes in the left and right subtree recursively */
	left_size = tree->left ?  binary_tree_size(tree->left) : 0;
	right_size = tree->right ?  binary_tree_size(tree->right) : 0;

	/* Return the total size of the tree */
	return (left_size + right_size + 1);
}
