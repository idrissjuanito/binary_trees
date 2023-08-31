#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder binary tree traversal
 *
 * @tree: pointer to root node of the tree
 * @func: function to call for each node value
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
