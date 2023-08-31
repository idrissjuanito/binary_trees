#include "binary_trees.h"
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
	/* declaration of the new node with its data type */
	binary_tree_t *newNode;

	/* allocate memory space for that node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values to the properties of the node */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* return a pointer to the node */
	return (newNode);
}
