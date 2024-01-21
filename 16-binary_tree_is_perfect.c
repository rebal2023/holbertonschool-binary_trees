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
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node
* Return: height or 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL || binary_tree_is_leaf(tree))
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left >= right)
return (1 + left);
return (1 + right);
}

/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 0 or 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
binary_tree_t *left_p, *r_path;

if (tree == NULL)
return (0);
left_p = tree->left;
r_path = tree->right;
if (binary_tree_is_leaf(tree))
return (1);
if (left_p == NULL || r_path == NULL)
return (0);
if (binary_tree_height(left_p) == binary_tree_height(r_path))
{
if (binary_tree_is_perfect(left_p) && binary_tree_is_perfect(r_path))
return (1);
}
return (0);
}
