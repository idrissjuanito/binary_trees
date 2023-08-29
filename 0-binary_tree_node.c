#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a new node attached to it's parent
 *
 * @parent: pointer to the parent node
 * @value: the value to add to new node
 *
 * Return: pointer to the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node) return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
