#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 *
 * @node: look for uncle
 *
 * Return: pointer of uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	grand_parent = node->parent->parent;

	if (grand_parent->left == node->parent)
		return (grand_parent->right);
	else
		return (grand_parent->right);
}
