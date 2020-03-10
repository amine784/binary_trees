#include <stdlib.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_preorder-function that goes through
* a binary tree using pre-order traversal
*@tree:is a pointer to the root node of the tree to traverse
*@func: is a pointer to a function to call
* for each node. The value in the node must be passed as a
*Return: always success.
**/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
  return;
binary_tree_postorder((*tree).left, func);
binary_tree_postorder((*tree).right, func);
func((*tree).n);
}

