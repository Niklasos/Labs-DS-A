#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "LinkedList.h"

int main()
{
	Graph* g = CreateGraph(5);

	AddDirectedEdge(g->vertexList[0], g->vertexList[3]);
	AddDirectedEdge(g->vertexList[0], g->vertexList[1]);
	AddDirectedEdge(g->vertexList[3], g->vertexList[0]);
	AddDirectedEdge(g->vertexList[4], g->vertexList[0]);


	for (int i = 0; i < 5; i++)
	{
		Edge* temp = g->vertexList[i]->head;
		printf("Vertice = %d", g->vertexList[i]->number);
		while (temp != NULL)
		{
			printf("-->%d", temp->vertex->number);
			temp = temp->next;
		}
		printf("\n\n");
		
	}

	
	List* list = GetNeighbors(g, g->vertexList[0]);

	Node* temp = list->head;

	while (temp != NULL)
	{
		printf("%d\n", temp->vertex->number);
		temp = temp->next;
	}

	printf("Num of edges: %d", GetNumEdges(g));
}