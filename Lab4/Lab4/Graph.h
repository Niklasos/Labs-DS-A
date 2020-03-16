#include <stdio.h>
#include <stdlib.h>
 
#include "LinkedList.h"

typedef struct EdgeT
{
	struct VertexT* vertex;
	struct EdgeT* next;
} Edge;

typedef struct VertexT
{
	int number;
	struct EdgeT* head;
} Vertex;

typedef struct GraphT
{
	int size;
	Vertex** vertexList;
} Graph;


typedef struct NodeT
{
	struct NodeT* prev;
	struct VertexT* vertex;
	struct NodeT* next;
} Node;

typedef struct ListT
{
	struct NodeT* head;
} List;

//Create and returns a graph containing n vertices
Graph* CreateGraph(int n);

//Returns the number of vertices in the Graph g
int GetNumVertices(Graph* g);

//Returns the number of edges in the Graph g
int GetNumEdges(Graph* g);

//Returns all vertices connected to node v with any edge
List* GetNeighbors(Graph* g, Vertex* v);

//Returns a list of all vertices v0 connected to node v with an edge (v0; v)
List* GetInNeighbors(Graph* g, Vertex* v);

//Returns a list of all vertices v0 connected to node v with an edge (v; v0)
List* GetOutNeighbors(Graph* g, Vertex* v);

//Add a directed edge that goes from the vertex v1 ---> v2
void AddDirectedEdge(Vertex* v1, Vertex* v2);

void AddUndirectedEdge(Vertex* v1, Vertex* v2);

int HasEdge(Vertex* v1, Vertex* v2);

//Returns an empty allocated list
List* CreateList();

Node* CreateNode(Vertex* vertex);

//Insert a Node node into the list.
int Insert(List* list, Node* node);

