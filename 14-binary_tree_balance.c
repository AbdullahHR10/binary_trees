#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL, otherwise the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Tree to be measured
 * Return: Balance factor of the node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height, value;

	if (tree == NULL)
		return (0);
	left_height = ((int)binary_tree_height(tree->left));
	right_height = ((int)binary_tree_height(tree->right));
	value  = left_height - right_height;
	return (value);
}
