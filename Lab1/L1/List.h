#include <stdio.h>
#include <stdlib.h>

struct Node
{
	struct Node* prev;
	int number;
	struct Node* next;
};

struct List
{
	struct Node* head;
	struct Node* tail;
};



//Returns 1 if list is empty and 0 if it isn't
int IsEmpty(struct List* list);

//Insert a node into the list
int Insert(struct List* list, struct Node* node);

//Returns a pointer to the node with the biggest key
struct Node* Maximum(struct List* list);

//Returns a pointer to the node with the smallest key
struct Node* Minimum(struct List* list);

//Returns the node with the inserted key. NULL if the key is not in the list.
struct Node* Search(struct List* list, int number);

//Delete the node from the list and return the node so it can be freed
struct Node* Delete(struct List* list, struct Node* node);

//Returns the next node based on the key
struct Node* Successor(struct List* list, struct Node* node);

//Returns the previous node based on the key
struct Node* Predecessor(struct List* list, struct Node* node);

//Returns an allocated list
struct List* CreateList();

//Returns an allocated node with a specific key
struct Node* CreateNode(int key);

