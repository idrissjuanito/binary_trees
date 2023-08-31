#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right of a given parent
 *
 * @parent: parent of the new right node
 * @value: value of the new node
 *
 * Return: pointer to the new node or NULL if anything goes wrong
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->right)
		new_node->right = parent->right;
	parent->right = new_node;
	return (new_node);
}
