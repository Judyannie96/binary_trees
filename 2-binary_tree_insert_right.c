#include"binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node to the right child
 *
 * @parent: A pointer to the node to insert the right child
 * @value: This is the value to put to the new node
 *
 * Return: If parent is NULL or error, return NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new  == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
