#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	heap_t *root;
	heap_t *node;

	root = NULL;
	node = heap_insert(&root, 98);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = heap_insert(&root, 402);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = heap_insert(&root, 12);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = heap_insert(&root, 46);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = heap_insert(&root, 128);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = heap_insert(&root, 256);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = heap_insert(&root, 512);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = heap_insert(&root, 50);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);

	return (0);
}
