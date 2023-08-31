#include "binary_trees.h"
/**
 * binary_tree_balance - calculate the balance factor of the tree
 *
 * @tree: root node of the tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;
	binary_tree_t *left_node, *right_node;

	if (!tree)
		return (0);
	left_node = tree->left;
	right_node = tree->right;

	while (left_node)
	{
		left++;
		left_node = left_node->left;
	}

	while (right_node)
	{
		right++;
		right_node = right_node->right;
	}
	return (left - right);
	/*left = binary_tree_balance(tree->left);*/
	/*right = binary_tree_balance(tree->right);*/

	/*if (left > right)*/
		/*return (left);*/
	/*else*/
		/*return (right);*/
}
