#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node,
 * NULL if node is NULL, the parent is NULL,
 * or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			(node->parent->left == NULL && node->parent->right == NULL) ||
			(node->parent->left == node && node->parent->right == NULL) ||
			(node->parent->right == node && node->parent->left == NULL))
		return (NULL);

	return (node->parent->left == node ?
			node->parent->right : node->parent->left);
}
