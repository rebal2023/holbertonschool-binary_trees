#include "binary_trees.h"

/**
* binary_tree_nodes - count nodes with at least 1 child in binary tree
* @tree: pointer to the root node of the tree to count the nb of nodes
* Return: number of nodes or 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t num_nodes = 0;
if (!tree)
return (0);
if (tree->left || tree->right)
num_nodes = 1;
num_nodes += binary_tree_nodes(tree->left);
num_nodes += binary_tree_nodes(tree->right);
return (num_nodes);
}
