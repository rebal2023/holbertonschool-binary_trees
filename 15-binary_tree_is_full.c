#include "binary_trees.h"

/**
* binary_tree_is_leaf - check if a node is a leaf
* @node: pointer to the node to check
* Return: 0 or 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL && node->left == NULL && node->right == NULL)
return (1);
return (0);
}

/**
* binary_tree_is_full - check if a binary tree is full
* @tree: pointer to the root node of the tree to check
* Return: 0 or 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
int l_path, r_path;

if (tree == NULL)
return (0);
if (binary_tree_is_leaf(tree))
return (1);
l_path = binary_tree_is_full(tree->left);
r_path = binary_tree_is_full(tree->right);
if (l_path == 0 || r_path == 0)
return (0);
return (1);
}
