#include <stdio.h>
#include <stdlib.h>
//Graph edge
typedef struct EdgeT
{
	struct VertexT* vertex;
	int weight;
	struct EdgeT* next;
} Edge;
//Graph Vertex
typedef struct VertexT
{
	char color;
	int SCCNumber;
	int discovered;
	int finished;
	int distance;
	struct VertexT* prev;
	int number;
	struct EdgeT* head;
} Vertex;
//Graph
typedef struct GraphT
{
	int size;
	Vertex** vertexList;
} Graph;

//List node
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

//Stack
typedef struct StackT
{
	int top;
	Vertex** vertices;
} Stack;


//Returns 0 if the queue is full and the key cant be inserted. Returns 1 if the key was successfully inserted
void Push(Stack* stack, Vertex* vertex);

//Returns the number at the top of the stack and removes it from the stack
Vertex* Pop(Stack* stack);

//Returns 0 if the stack isnt empty, Returns 1 if it is.
int StackEmpty(Stack* stack);

//Initialize and returns an empty stack
Stack* CreateStack();

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

//Add a directed weighted edge that goes from the vertex v1 ---> v2
void AddDirectedWeightedEdge(Vertex* v1, Vertex* v2, int weight);

//Add an undirected edge that goes from between the vertices v1 <---> v2
void AddUndirectedEdge(Vertex* v1, Vertex* v2);

//Returns 1 if there is an edge between the vertices v1 and v2 in either direction
int HasEdge(Vertex* v1, Vertex* v2);

//Returns an empty allocated list
List* CreateList();

//Create a new list node of an Vertex.
Node* CreateNode(Vertex* vertex);

//Insert a Node node into the list.
int Insert(List* list, Node* node);

