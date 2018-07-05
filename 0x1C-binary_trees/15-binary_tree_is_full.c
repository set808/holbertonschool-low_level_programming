#include "binary_trees.h"
/**
 * binary_tree_is_full - returns the balance of the binary tree
 * @tree: the root of the binary tree
 *
 * Return: returns 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full;

	if (!tree)
		return (0);

	is_full = 1;
	if (tree->left != NULL)
		is_full = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		is_full = binary_tree_is_full(tree->right);

	if (((tree->left == NULL && tree->right == NULL) ||
	     (tree->left != NULL && tree->right != NULL)) &&
	    is_full == 1)
		is_full = 1;
	else
		is_full = 0;
	return (is_full);
}
