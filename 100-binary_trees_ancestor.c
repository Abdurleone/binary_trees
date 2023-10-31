#include "binary_trees.h"

/**
 * binary_tree_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Apointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the ancestor node.
*/

binary_tree_t *binary_tree_ancensor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *p, *q;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	p = first->parent;
	q = second->parent;
	if (p == NULL || first == q || (!p->parent && q))
	{
		return (binary_tree_ancensor(first, q));
	}
	else if (q == NULL || p == second || (!q->parent && p))
	{
		return (binary_tree_ancensor(p, second));
	}
	return (binary_tree_ancensor(p, q));
}
