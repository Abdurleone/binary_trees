#include "binary_trees.h"

/**
 * binary_tree_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Apointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         if no common ancestor was founs, your function must return NULL.
*/

binary_tree_t *binary_tree_ancensor(const binary_tree_t *first,
		const binary_tree_t *second)
{
    binary_tree_t *mom, *pop;

    if (!first || !second)
	    return (NULL);
    if (first == second)
	    return ((binary_tree_t *)first);

    mom = first->parent, pop = second->parent;
    if (first == pop || !mom || (!mom->parent && pop))
	    return (binary_tree_ancensor(first, pop));
    else if (mom == second || !pop || (!pop->parent && mom))
	    return (binary_tree_ancensor(mom, second));

    return (binary_tree_ancensor(mom, pop));
}
