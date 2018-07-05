#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of the parent
 * @parent: the parent node
 * @value: value for the new node
 *
 * Return: returns a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
