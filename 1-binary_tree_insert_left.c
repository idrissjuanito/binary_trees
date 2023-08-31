#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child.
 * @value: value to store in the new node.
 *
 * Description: If the parent already has a left child, the new node must
 * take its place, and the old left child must be set as the
 * left child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	new_node->left = parent->left;
	parent->left = new_node;
	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
