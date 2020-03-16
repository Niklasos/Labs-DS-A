#include "Graph.h"

Graph* CreateGraph(int n)
{
	Graph* g = malloc(sizeof(Graph) * n);
	if (g == NULL)
	{
		return NULL;
	}

	g->size = n;
	g->vertexList = malloc(sizeof(Vertex));
	if (g->vertexList == NULL)
	{
		return NULL;
	}

	for (int i = 1; i < n + 1; i++)
	{
		Vertex* v = malloc(sizeof(Vertex));
		if (v == NULL)
		{
			return NULL;
		}
		v->head = NULL;
		v->number = i;
		g->vertexList[i-1] = v;
	}
	return g;
}

int GetNumVertices(Graph* g)
{
	if (g == NULL)
	{
		return 0;
	}
	return g->size;
}

int GetNumEdges(Graph* g)
{
	if (g == NULL)
	{
		return 0;
	}
	int edges = 0;
	for (int i = 0; i < g->size; i++)
	{
		Edge* temp = g->vertexList[i]->head;
		while (temp != NULL)
		{
			edges++;
			temp = temp->next;
		}
		
	}
	return edges;
}

List* GetNeighbors(Graph* g, Vertex* v)
{
	if (g == NULL || v == NULL)
	{
		return NULL;
	}
	List* neighBors = CreateList();
	for (int i = 0; i < g->size; i++)
	{
		int hasInEdge = 0;
		Edge* temp = g->vertexList[i]->head;

		//Insert every outgoing edge from v ----> 
		if (g->vertexList[i] == v)
		{
			while (temp != NULL)
			{
				Node* node = CreateNode(temp->vertex);
				Insert(neighBors, node);
				temp = temp->next;
			}
		}
		else
		{
			while (temp != NULL)
			{
				if (temp->vertex == v)
				{
					Node* node = CreateNode(g->vertexList[i]);
					Insert(neighBors, node);
				}
				temp = temp->next;
			}
		}
	}
	return neighBors;
}

List* GetInNeighbors(Graph* g, Vertex* v)
{
	if (g == NULL || v == NULL)
	{
		return NULL;
	}
	List* neighBors = CreateList();
	for (int i = 0; i < g->size; i++)
	{
		int hasInEdge = 0;
		Edge* temp = g->vertexList[i]->head;

		while (temp != NULL)
		{
			if (temp->vertex == v)
			{
				Node* node = CreateNode(g->vertexList[i]);
				Insert(neighBors, node);
			}
			temp = temp->next;
		}
		
	}
	return neighBors;
}

List* GetOutNeighbors(Graph* g, Vertex* v)
{
	if (g == NULL || v == NULL)
	{
		return NULL;
	}
	List* neighBors = CreateList();
	for (int i = 0; i < g->size; i++)
	{
		Edge* temp = g->vertexList[i]->head;

		//Insert every outgoing edge from v ----> 
		if (g->vertexList[i] == v)
		{
			while (temp != NULL)
			{
				Node* node = CreateNode(temp->vertex);
				Insert(neighBors, node);
				temp = temp->next;
			}
		}
	}
	return neighBors;
}

void AddDirectedEdge(Vertex* v1, Vertex* v2)
{
	if (v1 == NULL || v2 == NULL)
	{
		return;
	}
	Edge* temp = v1->head;
	Edge* edge = malloc(sizeof(Edge));
	if (edge == NULL)
	{
		return;
	}
	edge->vertex = v2;
	edge->next = NULL;
	if (v1->head == NULL)
	{
		v1->head = edge;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = edge;
	}
	
}

void AddUndirectedEdge(Vertex* v1, Vertex* v2)
{
	if (v1 == NULL || v2 == NULL)
	{
		return;
	}
	Edge* temp = v1->head;
	Edge* edge = malloc(sizeof(Edge));
	if (edge == NULL)
	{
		return;
	}
	edge->vertex = v2;
	edge->next = NULL;
	if (v1->head == NULL)
	{
		v1->head = edge;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = edge;
	}



	Edge* temp2 = v2->head;
	Edge* edge2 = malloc(sizeof(Edge));
	if (edge2 == NULL)
	{
		return;
	}
	edge2->vertex = v1;
	edge2->next = NULL;
	if (v2->head == NULL)
	{
		v2->head = edge2;
	}
	else
	{
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = edge2;
	}
}

int HasEdge(Vertex* v1, Vertex* v2)
{
	if (v1 == NULL || v2 == NULL)
	{
		return 0;
	}
	Edge* v1Edge = v1->head;
	Edge* v2Edge = v2->head;
	while (v1Edge != NULL)
	{
		if (v1Edge->vertex == v2)
		{
			return 1;
		}
		v1Edge = v1Edge->next;
	}
	while (v2Edge != NULL)
	{
		if (v2Edge->vertex == v1)
		{
			return 1;
		}
		v2Edge = v2Edge->next;
	}
	return 0;
}



List* CreateList()
{
	List* list = malloc(sizeof(List));
	if (list != NULL)
	{
		list->head = NULL;
	}
	return list;
}

Node* CreateNode(Vertex* vertex)
{
	if (vertex == NULL)
	{
		return NULL;
	}
	Node* node = malloc(sizeof(Node));
	if (node == NULL)
	{
		return NULL;
	}
	node->vertex = vertex;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

int Insert(List* list, Node* node)
{
	if (node == NULL || list == NULL)
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

