#include "binary_trees.h"
int measure_tree_height(const binary_tree_t *tree);
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
	/*binary_tree_t *left_node, *right_node;*/

	if (!tree)
		return (0);
	left = measure_tree_height(tree->left);
	right = measure_tree_height(tree->right);
	/*left_node = tree->left;*/
	/*right_node = tree->right;*/

	/*while (left_node)*/
	/*{*/
		/*left++;*/
		/*left_node = left_node->left;*/
	/*}*/

	/*while (right_node)*/
	/*{*/
		/*right++;*/
		/*right_node = right_node->right;*/
	/*}*/
	return (left - right);
	/*left = binary_tree_balance(tree->left);*/
	/*right = binary_tree_balance(tree->right);*/

	/*if (left > right)*/
		/*return (left);*/
	/*else*/
		/*return (right);*/
}

/**
 * measure the height of a tree
 *
 * @tree: root of the tree
 *
 * Return: height of the tree
 */
int measure_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = 1 + measure_tree_height(tree->left);
	right = 1 + measure_tree_height(tree->right);

	if (left >= right)
		return (left);
	else
		return (right);
}
