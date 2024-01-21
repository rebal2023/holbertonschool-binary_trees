#include "binary_trees.h"

/**
* binary_tree_leaves - function that counts leaves in a binary tree
* @tree: pointer to root node of the tree to count the nb of leaves
* Return: number of leaves or 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t num_lf = 0;

if (!tree)
return (0);
if (!(tree->left) && !(tree->right))
return (1);

num_lf += binary_tree_leaves(tree->left);
num_lf += binary_tree_leaves(tree->right);

return (num_lf);
}
