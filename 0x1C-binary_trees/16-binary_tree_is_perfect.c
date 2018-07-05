#include "binary_trees.h"
/**
 * binary_tree_height - returns the height of the binary tree
 * @tree: the root of the binary tree
 *
 * Return: returns the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;
	if (tree->left != NULL)
	{
		left_height++;
		left_height += binary_tree_height(tree->left);

	}
	if (tree->right != NULL)
	{
		right_height++;
		right_height += binary_tree_height(tree->right);
	}

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is a leaf;
 * @node: the node to check
 *
 * Return: returns 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}


#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: the root of the binary tree
 *
 * Return: returns 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (tree->right && tree->left)
	{
		if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
			return (0);
		if (binary_tree_is_leaf(tree->left) == 1 &&
		    binary_tree_is_leaf(tree->right) == 1)
			return (1);
	}

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left == 0 || right == 0)
		return (0);
	return (1);
}
