#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Description: This function performs an in-order traversal of a binary tree.
 * If either the tree or the function pointer is NULL, it returns nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
