#include "binary_trees.h"
/**
 * check_sub_tree_left - check if all nodes are smaller than
 * the root specified
 * @node: node in the tree to verify condition
 * @max: value to compare
 * Return: 1 if all nodes are smaller or equal or 0 if not
*/
int check_sub_tree_left(const binary_tree_t *node, int max)
{
	int left = 0, right = 0;

	if (node == NULL)
	{
		return (1);
	}
	else
	{
		if (node->n >= max)
			return (0);
		left = check_sub_tree_left(node->left, max);
		right = check_sub_tree_left(node->right, max);
		if (left == right && left == 1)
			return (0); 
	}
}
/**
 * binary_tree_is_bst - says if a tree is bst ot not
 * the proccess here is first verify that the left node is smaller than the root
 * after that verify if the left subtree has nodes smaller than root
 * and the right subtree has bigger nodes than root
 * @tree: node that points to the tree to check
 * Return: 1 if it is a BST or 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int var = 0, left = 2, right = 2;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->left->n tree->n)
		return (0);
	if (tree->right && tree->right->n tree->n)
                return (0);
	if (tree->left && tree->left->n tree->n)
	{
		var = check_sub_tree_left(tree->left, tree->n);
		if (var == 0)
			return (0);
		right = binary_tree_is_bst(tree->right)
	}
	if (left != 2 || right != 2)
	{
		if (left == 0 || right == 0)
			return (0);
	}
	return (1);
}
