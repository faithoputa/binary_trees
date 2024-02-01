#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node
* @parent: Pointer to the parent node of the node to create
* @value: Value to put in the new node
*
* Return: Pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;

/* Allocate memory for the new node */
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);

/* Assign the value and the parent pointer to the new node */
if (value)
{
node->n = value;
node->parent = parent;
/* Set the left and right child pointers to NULL */
node->left = NULL;
node->right = NULL;
return (node);
}
/* Return the pointer to the new node */
return (node);
}

