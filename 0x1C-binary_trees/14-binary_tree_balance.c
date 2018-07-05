#include "binary_trees.h"
/**
 * binary_tree_balance - returns the balance of the binary tree
 * @tree: the root of the binary tree
 *
 * Return: returns the height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;
	if (tree->left != NULL)
	{
		left_height++;
		left_height += binary_tree_balance(tree->left);

	}
	if (tree->right != NULL)
	{
		right_height++;
		right_height += binary_tree_balance(tree->right);
	}

	return (left_height - right_height);

}
