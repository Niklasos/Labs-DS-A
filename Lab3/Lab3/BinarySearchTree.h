#include <stdio.h>
#include <stdlib.h>



typedef struct NodeT
{
	struct NodeT* Parent;
	int number;
	struct NodeT* LeftChild;
	struct NodeT* RightChild;
} Node;

typedef struct BinarySearchTreeT
{
	struct NodeT* Root;
} BinarySearchTree;

//Insert a Node *node into a BinarySearchTree *tree and returns a pointer to the node.
//If tree or node is NULL it returns NULL
Node* TreeInsert(BinarySearchTree *tree, Node *node);

//Search for a int number in the BST that starting from the Node * root returns the node with the matching number.
//Returns NULL if there is no node with that specific number or if root is NULL.
Node* TreeSearch(Node* root, int number);

//Returns the node with the smallest number or NULL if root is NULL
Node* TreeMinimum(Node* root);

//Returns the node with the largest number or NULL if root is NULL
Node* TreeMaximum(Node* root);

//Return the next larger number or NULL if node is the biggest.
Node* TreeSuccessor(Node* node);

//Return the next smaller number or NULL if node is the smallest.
Node* TreePredecessor(Node* node);

//Delete the node del from the root. Returns the deleted node if the node is removed from the BST.
Node* TreeDelete(Node* root, Node* del);

//Returns the height of the tree.
int TreeDepth(Node* root);

//Returns the number of nodes in the tree
int TreeCount(Node* root);

//Prints the number of the trees in ascending order.
void TreePrintAsc(Node* root);