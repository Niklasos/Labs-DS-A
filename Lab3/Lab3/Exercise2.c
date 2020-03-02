#include <stdio.h>
#include <stdlib.h>

#include "Exercise2.h"
#include "Load_file.h"

void TestAdd();
void AddToTree(BinarySearchTree* binarySearchTree);

void AddToTree(BinarySearchTree* binarySearchTree)
{
	int* arr = load_file("test-10-4-problem");

	for (int i = 1; i < arr[0] + 1; i++)
	{
		Node* node = malloc(sizeof(Node));
		if (node == NULL)
		{
			return;
		}
		node->number = arr[i];
		node->LeftChild = NULL;
		node->RightChild = NULL;
		TreeInsert(binarySearchTree, node);
	}
}

void TestAdd()
{
	BinarySearchTree* binarySearchTree = malloc(sizeof(BinarySearchTree));
	Node* node = malloc(sizeof(Node));

	
	if (binarySearchTree == NULL || node == NULL)
	{
		return;
	}
	
	node->LeftChild = NULL;
	node->RightChild = NULL;
	node->Parent = NULL;
	node->number = 5000;

	binarySearchTree->Root = NULL;

	AddToTree(binarySearchTree);
	TreePrintAsc(binarySearchTree->Root);
}