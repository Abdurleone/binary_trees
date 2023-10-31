#include "binary_trees.h"
/**
 * binary_tree_delete - free an entire tree using recursion if free the node
 * when the node and right and NULL
 * @tree: tree to free
 * Return: Nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    else
    {
        if (tree != NULL)
        {
            binary_tree_delete(tree->left);
            binary_tree_delete(tree->right);
        }
    }
}