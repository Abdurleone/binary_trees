#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	pivot = tree->left;
	tree->right = pivot->right;
	if (pivot->left != NULL)
	{
		pivot->right->parent = tree;
	}
	pivot->right = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}