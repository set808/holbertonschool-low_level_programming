#include "binary_trees.h"
/*
 * binary_tree_is_leaf - checks if node is a leaf;
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return 0;
	if (node->parent == NULL)
		return 0;
	if(node->left != NULL || node->right != NULL)
		return 0;
	return (1);
}
