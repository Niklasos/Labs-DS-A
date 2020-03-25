#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"


//Initialize and returns a graph that represents the map in exercise 2
Graph* CreateGraphAndEdgesExercise2();

void PrintExercise2Path();

//Create first graph in exercise 4
Graph* CreateGraph1InExercise4();
Graph* CreateGraph2InExercise4();

//Takes a graph and initialize the vertices distance to 0 for the source and infinity on the others and sets prev to NULL
void InitializeSingleSource(Graph* graph, Vertex* source, int numberOfVertices);

//These two algorithms are used for exercise 2 when we calculate the shortest way in a graph without any weight on the edge
//Takes two vertices where there is a edge from vertex from to vertex to.
void RelaxNoWeight(Vertex* from, Vertex* to);
//Input a graph and a source node and the number of Vertices in that graph and you get the distance from the source
int BellmanFordNoWeight(Graph* graph, Vertex* source, int numberOfVertices);

//These two algorithms are used for exercise 4
//Takes two vertices where there is a edge from vertex from to vertex to.
void Relax(Vertex* from, Vertex* to, int weight);
int BellmanFord(Graph* graph, Vertex* source, int numberOfVertices);

//Algorithms used for exercise 3
void DFS(Graph* graph, int size, Stack* stack);


void DFSVisit(Graph* graph, Vertex* vertex, Stack* stack);

void DFS2(Graph* graph, Vertex* source);
void DFSVisit2(Graph* graph, Vertex* vertex);

//Returns a new graph with the edges changed to go the other way
Graph* TransposeGraph(Graph* graph, int size);

//Prints strongly connected components
void SCC(Graph* graph, int size);