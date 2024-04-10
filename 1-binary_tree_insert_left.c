#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	if (parent->left != NULL)
		parent->left = NULL;
	binary_tree_t *newNode = binary_tree_node(parent, value);
	parent->left = newNode;
	return (newNode);
}
