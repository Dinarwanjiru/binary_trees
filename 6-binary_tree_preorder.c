#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node.
 * 	  The value in the node must be passed as a parameter to this function
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL, if so, return */
	if (tree == NULL || func == NULL)
		return;

	/* Call the function with the value of the current node */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
