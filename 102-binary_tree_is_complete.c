#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, i;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);

	for (i = 0; i < size; i++)
	{
		if (i >= size - 1)
			return (1);

		if (binary_tree_size(tree) != (2 * i + 1))
			return (0);
	}

	return (1);
}
