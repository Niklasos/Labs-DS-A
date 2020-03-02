#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int AddToList1(struct List* list);
int AddToList2(struct List* list);

int RunTest()
{
	struct List* list1 = CreateList();
	struct List* list2 = CreateList();

	list1->head = NULL;
	list1->tail = NULL;
	list2->head = NULL;
	list2->tail = NULL;

	AddToList1(list1);
	AddToList2(list2);

	struct Node* list1Max = Maximum(list1);
	struct Node* list1Min = Minimum(list1);
	struct Node* list2Max = Maximum(list2);
	struct Node* list2Min = Minimum(list2);

	int testSucceeded = 1;

	if (list1Max != Search(list1, 10) || list1Min != Search(list1, 1) || list2Max != Search(list2, 9) || list2Min != Search(list2, 1))
	{
		testSucceeded = 0;
	}
	struct Node* list1Pre = Predecessor(list1, Search(list1, 5));
	struct Node* list1Suc = Successor(list1, Search(list1, 5));
	struct Node* list2Pre = Predecessor(list2, Search(list2, 9));
	struct Node* list2Suc = Successor(list2, Search(list2, 9));

	
	if (list1Pre != Search(list1, 3))
	{
		testSucceeded = 0;
	}
	if (list1Suc != Search(list1, 7))
	{
		testSucceeded = 0;
	}
	if (list2Pre != Search(list2, 6))
	{
		testSucceeded =  0;
	}
	if (list2Suc != NULL)
	{
		testSucceeded = 0;
	}


	list2Pre = Predecessor(list2, Maximum(list1));
	list1Pre = Predecessor(list1, Maximum(list2));

	if (list2Pre != Search(list2, 9))
	{
		testSucceeded = 0;
	}

	if (list1Pre != Search(list1, 8))
	{
		testSucceeded = 0;
	}

	if (testSucceeded == 0)
	{
		printf("Test Exercise 2 failed!\n");
	}
	else
	{
		printf("Test Exercise 2 success!!\n");
	}

	return 1;
}

int AddToList1(struct List* list)
{
	struct Node* node = CreateNode(3);
	struct Node* node2 = CreateNode(1);
	struct Node* node3 = CreateNode(5);
	struct Node* node4 = CreateNode(10);
	struct Node* node5 = CreateNode(8);
	struct Node* node6 = CreateNode(7);

	Insert(list, node);
	Insert(list, node2);
	Insert(list, node3);
	Insert(list, node4);
	Insert(list, node5);
	Insert(list, node6);
	return 1;
}

int AddToList2(struct List* list)
{
	struct Node* node = CreateNode(5);
	struct Node* node2 = CreateNode(2);
	struct Node* node3 = CreateNode(9);
	struct Node* node4 = CreateNode(6);
	struct Node* node5 = CreateNode(1);
	struct Node* node6 = CreateNode(2);

	node->number = 5;
	node2->number = 2;
	node3->number = 9;
	node4->number = 6;
	node5->number = 1;
	node6->number = 2;

	Insert(list, node);
	Insert(list, node2);
	Insert(list, node3);
	Insert(list, node4);
	Insert(list, node5);
	Insert(list, node6);
	return 1;
}

