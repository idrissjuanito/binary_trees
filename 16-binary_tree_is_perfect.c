#include "binary_trees.h"
int measure_tree_depth(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: root node of the tree
 *
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (measure_tree_depth(tree->left) == measure_tree_depth(tree->right))
		return (1);
	return (0);
}

/**
 * measure_tree_depth - measures that all leaves of three have same depth
 *
 * @node: tree to measure
 *
 * Return: depth of the tree or 0 is leaves not of equal depth
 */
int measure_tree_depth(const binary_tree_t *node)
{
	int left, right;

	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	left = measure_tree_depth(node->left);
	right = measure_tree_depth(node->right);
	if (right == 0 || left == 0)
		return (0);
	if (left != right)
		return (0);
	return (1 + left);
}
