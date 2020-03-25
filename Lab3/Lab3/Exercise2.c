#include <stdio.h>
#include <stdlib.h>

#include "Exercise2.h"
#include "Load_file.h"

void AddToTree(BinarySearchTree* binarySearchTree);

void AddToTree(BinarySearchTree* binarySearchTree)
{
	int* arr = load_file("test-10-3-problem");

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

void RunTests()
{
	int minMax = TestMinMax();
	int sucPre = TestSucPre();
	int depCou = TestDepthAndCount();

	if (minMax == 1)
	{
		printf("Test for min/max ran successfully!\n");
	}
	if (sucPre == 1)
	{
		printf("Test for successor/predecessor ran successfully!\n");
	}
	if (depCou == 1)
	{
		printf("Test for depth and count ran successsfully!\n");
	}
}

int TestMinMax()
{
	BinarySearchTree* binarySearchTree = malloc(sizeof(BinarySearchTree));

	if (binarySearchTree == NULL)
	{
		exit(1);
	}
	binarySearchTree->Root = NULL;

	AddToTree(binarySearchTree);

	Node *max = TreeMaximum(binarySearchTree->Root);
	Node *min = TreeMinimum(binarySearchTree->Root);

	if (min->number == 4 && max->number == 97)
	{
		return 1;
	}
	return 0;
}

int TestSucPre()
{
	BinarySearchTree* binarySearchTree = malloc(sizeof(BinarySearchTree));

	if (binarySearchTree == NULL)
	{
		exit(1);
	}
	binarySearchTree->Root = NULL;

	AddToTree(binarySearchTree);

	Node* suc97 = TreeSuccessor(TreeSearch(binarySearchTree->Root, 97));
	Node* pre97 = TreePredecessor(TreeSearch(binarySearchTree->Root, 97));
	Node* suc4 = TreeSuccessor(TreeSearch(binarySearchTree->Root, 4));
	Node* pre4 = TreePredecessor(TreeSearch(binarySearchTree->Root, 4));

	if (pre4 == NULL && suc4->number == 15 && suc97 == NULL && pre97->number == 94)
	{
		return 1;
	}
	return 0;
}

int TestDepthAndCount()
{
	BinarySearchTree* binarySearchTree = malloc(sizeof(BinarySearchTree));

	if (binarySearchTree == NULL)
	{
		exit(1);
	}
	binarySearchTree->Root = NULL;

	AddToTree(binarySearchTree);

	int depth = TreeDepth(binarySearchTree->Root);

	int count = TreeCount(binarySearchTree->Root);

	if (depth == 5 && count == 10)
	{
		return 1;
	}
	return 0;
}
