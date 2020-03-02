#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int IsEmpty(struct List* list);
int Insert(struct List* list, struct Node* node);
struct Node* Maximum(struct List* list);
struct Node* Minimum(struct List* list);
struct Node* Search(struct List* list, int number);
struct Node* Delete(struct List* list, struct Node* node);
struct Node* Successor(struct List* list, struct Node* node);
struct Node* Predecessor(struct List* list, struct Node* node);
struct List* CreateList();
struct Node* CreateNode(int key);

int IsEmpty(struct List* list)
{
	if (list->head == NULL)
	{
		return 1;
	}
	return 0;
}

struct Node* Search(struct List* list, int number)
{
	struct Node* temp = list->head;

	while (temp != NULL && temp->number != number)
	{
		temp = temp->next;
	}
	return temp;
}

struct Node* Delete(struct List* list, struct Node* node)
{
	//Return NULL if list is empty or the input node is NULL
	if (list->head == NULL || node == NULL)
	{
		return NULL;
	}

	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}
	else
	{
		list->head = node->next;
	}
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	return node;
}

int Insert(struct List* list, struct Node* node)
{
	if (node == NULL)
	{
		return 0;
	}
	node->next = list->head;
	if (list->head != NULL)
	{
		list->head->prev = node;
	}
	list->head = node;
	node->prev = NULL;
	return 1;
}

struct Node* Maximum(struct List* list)
{
	//Return NULL if the list is empty
	if (list->head == NULL)
	{
		return NULL;
	}
	struct Node* temp = NULL, * max = NULL;
	temp = list->head;
	max = temp;
	while (temp != NULL)
	{
		if (max->number < temp->number)
		{
			max = temp;
		}
		temp = temp->next;
	}
	return max;
}

struct Node* Minimum(struct List* list)
{
	//Return NULL if the list is empty
	if (list->head == NULL)
	{
		return NULL;
	}
	struct Node* temp = NULL, * max = NULL;
	temp = list->head;
	max = temp;
	while (temp != NULL)
	{
		if (max->number > temp->number)
		{
			max = temp;
		}
		temp = temp->next;
	}
	return max;
}

struct Node* Successor(struct List* list, struct Node* node)
{
	//Return NULL if the list is empty
	if (list->head == NULL || node == NULL)
	{
		return NULL;
	}
	struct Node* result = NULL, * temp = NULL;

	temp = Maximum(list);
	if (temp->number == node->number)
	{
		return NULL;
	}
	int diff = node->number - temp->number;
	temp = list->head;
	while (temp != NULL)
	{
		int currentDiff = node->number - temp->number;
		if (currentDiff >= diff && currentDiff < 0)
		{
			diff = currentDiff;
			result = temp;
		}
		temp = temp->next;
	}

	return result;
}

struct Node* Predecessor(struct List* list, struct Node* node)
{
	//Return NULL if the list is empty
	if (list->head == NULL || node == NULL)
	{
		return NULL;
	}

	struct Node* result = NULL, * temp = NULL;

	//Set the temporary pointer to the smallest value
	temp = Minimum(list);

	//If the node is the smallest, return NULL
	if (temp->number == node->number)
	{
		return NULL;
	}

	//Set the diff between the smallest number and the input node
	int diff = node->number - temp->number;

	temp = list->head;
	while (temp != NULL)
	{
		int currentDiff = node->number - temp->number;
		if (currentDiff <= diff && currentDiff > 0)
		{
			diff = currentDiff;
			result = temp;
		}
		temp = temp->next;
	}

	return result;
}

//Function that returns an allocated list
struct List* CreateList()
{
	struct List* list = malloc(sizeof(struct List));
	if (list != NULL)
	{
		list->head = NULL;
		list->tail = NULL;
	}
	return list;
}

//Function that takes a key and allocate memory to this node
struct Node* CreateNode(int key)
{
	struct Node* node = malloc(sizeof(struct Node));
	if (node != NULL)
	{
		node->number = key;
	}
	
	return node;
}
