#include "binary_trees.h"
int tree_node_depth(const binary_tree_t *node);

/**
 * binary_trees_ancestor - finds the common ancestor of two nodes
 *
 * @first: first node
 * @second: second node
 *
 * Return: pointer to node of ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int depth_first, depth_second;

	if (!first || !second)
		return (NULL);
	depth_first = tree_node_depth(first);
	depth_second = tree_node_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

/**
 * tree_node_depth - measure the depth of of a node
 *
 * @node: the node to measure
 *
 * Return: depth
 */
int tree_node_depth(const binary_tree_t *node)
{
	int depth = 0;
	binary_tree_t *parent;

	if (!node)
		return (0);
	parent = node->parent;

	while (parent)
	{
		depth += 1;
		parent = parent->parent;
	}
	return (depth);
}
