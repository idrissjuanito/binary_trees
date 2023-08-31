#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using preorder traversal
 *
 * @tree: pointer of root node of the tree
 * @func: pointer to function to call for each value of node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
