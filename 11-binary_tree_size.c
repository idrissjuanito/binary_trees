#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure its size.
 * Return: Depth of a node in a binary tree. If tree is NULL,
 * the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
	}
}
