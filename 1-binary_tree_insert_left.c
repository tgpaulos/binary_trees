#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node in the left of the parent
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
	binary_tree_t *new_node;

	if (parent == NULL) {
		return NULL;
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) {
		return NULL;
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL) {
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return new_node;
}
