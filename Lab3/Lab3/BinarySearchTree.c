#include <stdio.h>
#include <stdlib.h>

#include "BinarySearchTree.h"

Node* TreeSearch(Node* root, int number);

Node* TreeInsert(BinarySearchTree *tree, Node *node);

Node* TreeMinimum(Node* root);

Node* TreeMaximum(Node* root);

Node* TreeSuccessor(Node* node);

Node* TreePredecessor(Node* node);

Node* TreeDelete(Node* root, Node* del);

int TreeDepth(Node* root);

int TreeCount(Node* root);

void TreePrintAsc(Node* root);


Node* TreeInsert(BinarySearchTree *tree, Node *node)
{
	if (tree == NULL || node == NULL)
	{
		printf("The inserted node or the tree is NULL reference!\n");
		return node;
	}
	if (tree->Root == NULL)
	{
		node->Parent = NULL;
		tree->Root = node;
		return node;
	}
	Node* temp = tree->Root, * temp2 = NULL;


	while (temp != NULL)
	{
		temp2 = temp;
		if (node->number < temp->number)
		{
			temp = temp->LeftChild;
		}
		else
		{
			temp = temp->RightChild;
		}
	}
	node->Parent = temp2;
	if (temp2 == NULL)
	{
		tree->Root = node;
	}
	else if (node->number < temp2->number)
	{
		temp2->LeftChild = node;
	}
	else
	{
		temp2->RightChild = node;
	}
	return node;
}

Node* TreeSearch(Node *root, int number)
{
	if (root == NULL || number == root->number)
	{
		return root;
	}

	if (number < root->number)
	{
		return TreeSearch(root->LeftChild, number);
	}
	else
	{
		return TreeSearch(root->RightChild, number);
	}
}

Node* TreeMinimum(Node* root)
{
	while (root->LeftChild != NULL)
	{
		root = root->LeftChild;
	}
	return root;
}

Node* TreeMaximum(Node* root)
{
	while (root->RightChild != NULL)
	{
		root = root->RightChild;
	}
	return root;
}

Node* TreeSuccessor(Node* node)
{
	if (node == NULL)
	{
		return NULL;
	}
	if (node->RightChild != NULL)
	{
		return TreeMinimum(node->RightChild);
	}
	Node* temp = node->Parent;

	while (temp != NULL && node == temp->RightChild)
	{
		node = temp;
		temp = temp->Parent;
		if (temp == NULL)
		{
			return NULL;
		}
	}
	return temp;
}

Node* TreePredecessor(Node* node)
{
	if (node == NULL)
	{
		return NULL;
	}
	if (node->LeftChild != NULL)
	{
		return TreeMaximum(node->LeftChild);
	}
	Node* temp = node->Parent;

	while (temp != NULL && node == temp->LeftChild)
	{
		node = temp;
		temp = temp->Parent;
		if (temp == NULL)
		{
			return NULL;
		}
	}
	return temp;
}

Node* TreeDelete(Node* root, Node* del)
{
	if (del == NULL)
	{
		return del;
	}
	Node* temp1 = NULL, * temp2 = NULL;
	if (del->LeftChild == NULL || del->RightChild == NULL)
	{
		temp1 = del;
	}
	else
	{
		temp1 = TreeSuccessor(del);
	}
	if (temp1->LeftChild != NULL)
	{
		temp2 = temp1->LeftChild;
	}
	else
	{
		temp2 = temp1->RightChild;
	}
	if (temp2 != NULL)
	{
		temp2->Parent = temp1->Parent;
	}
	if (temp1->Parent == NULL)
	{
		root = temp2;
	}
	else
	{
		if (temp1 == temp1->Parent->LeftChild)
		{
			temp1->Parent->LeftChild = temp2;
		}
		else
		{
			temp1->Parent->RightChild = temp2;
		}
	}
	if (temp1 != del)
	{
		del->number = temp1->number;
	}
	return temp1;
}

int TreeDepth(Node* root)
{
	if (root == NULL)
	{
		return 0;
	}

	int left = TreeDepth(root->LeftChild);
	int right = TreeDepth(root->RightChild);

	if (left > right)
	{
		return left + 1;
	}
	else
	{
		return right + 1;
	}
}

int TreeCount(Node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//Count root
	int count = 1;
	if (root->LeftChild != NULL)
	{
		count += TreeCount(root->LeftChild);
	}

	if (root->RightChild != NULL)
	{
		count += TreeCount(root->RightChild);
	}
	return count;
}

void TreePrintAsc(Node* root)
{
	if (root != NULL)
	{
		TreePrintAsc(root->LeftChild);
		printf("%d\n", root->number);
		TreePrintAsc(root->RightChild);
	}
	
}