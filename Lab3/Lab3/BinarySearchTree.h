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

Node* TreeInsert(BinarySearchTree *tree, Node *node);

Node* TreeSearch(Node* root, int number);

Node* TreeMinimum(Node* root);

Node* TreeMaximum(Node* root);

Node* TreeSuccessor(Node* node);

Node* TreePredecessor(Node* node);

Node* TreeDelete(Node* root, Node* del);

int TreeDepth(Node* root);

int TreeCount(Node* root);

void TreePrintAsc(Node* root);