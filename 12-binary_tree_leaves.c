#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the treeto count
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If node is a leaf, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count leaves in the left and right subtrees */
	left_leaves = tree->left ? binary_tree_leaves(tree->left) : 0;
	right_leaves = tree->right ? binary_tree_leaves(tree->right) : 0;

	/* Return the sum of leaves in the subtrees */
	return (left_leaves + right_leaves);
}
