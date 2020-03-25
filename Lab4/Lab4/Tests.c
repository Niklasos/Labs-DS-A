#include "Tests.h"

void TestGetNumVerticesAndEdges()
{
	Graph* g = CreateGraph(9);

	AddDirectedEdge(g->vertexList[0], g->vertexList[1]);
	AddDirectedEdge(g->vertexList[1], g->vertexList[2]);
	AddDirectedEdge(g->vertexList[2], g->vertexList[3]);
	AddDirectedEdge(g->vertexList[3], g->vertexList[0]);
	AddDirectedEdge(g->vertexList[2], g->vertexList[4]);
	AddDirectedEdge(g->vertexList[4], g->vertexList[5]);
	AddDirectedEdge(g->vertexList[5], g->vertexList[6]);
	AddDirectedEdge(g->vertexList[6], g->vertexList[4]);
	AddDirectedEdge(g->vertexList[7], g->vertexList[6]);
	AddDirectedEdge(g->vertexList[7], g->vertexList[8]);

	if (GetNumEdges(g) == 10)
	{
		printf("Num of edges and vertices test success!\n");
	}
	else
	{
		printf("Num of edges and vertices test failed!\n");
	}
}

void TestGetNeighbors()
{
	Graph* g = CreateGraph(9);

	AddDirectedEdge(g->vertexList[0], g->vertexList[1]);
	AddDirectedEdge(g->vertexList[1], g->vertexList[2]);
	AddDirectedEdge(g->vertexList[2], g->vertexList[3]);
	AddDirectedEdge(g->vertexList[3], g->vertexList[0]);
	AddDirectedEdge(g->vertexList[2], g->vertexList[4]);
	AddDirectedEdge(g->vertexList[4], g->vertexList[5]);
	AddDirectedEdge(g->vertexList[5], g->vertexList[6]);
	AddDirectedEdge(g->vertexList[6], g->vertexList[4]);
	AddDirectedEdge(g->vertexList[7], g->vertexList[6]);
	AddDirectedEdge(g->vertexList[7], g->vertexList[8]);

	List* list = GetNeighbors(g, g->vertexList[0]);
	Vertex* v1 = list->head->vertex;
	Vertex* v2 = list->head->next->vertex;

	List* listOut = GetOutNeighbors(g, g->vertexList[3]);
	Vertex* v1Out = listOut->head->vertex;

	List* listIn = GetInNeighbors(g, g->vertexList[8]);
	Vertex* v1In = listIn->head->vertex;

	if (v2 == g->vertexList[1] && v1 == g->vertexList[3] && v1Out == g->vertexList[0] && v1In == g->vertexList[7])
	{
		printf("Neighbor test success!\n");
	}
	else
	{

		printf("Neighbor test failed!\n");
	}
}

void TestEdgeAdd()
{
	Graph* g = CreateGraph(9);

	AddDirectedEdge(g->vertexList[0], g->vertexList[1]);
	AddUndirectedEdge(g->vertexList[1], g->vertexList[8]);

	if (HasEdge(g->vertexList[0], g->vertexList[1]) && HasEdge(g->vertexList[1], g->vertexList[8]) && HasEdge(g->vertexList[2], g->vertexList[8]) == 0)
	{
		printf("Edge add and check test success!\n");
	}
	else
	{
		printf("Edge add and check test failed!\n");
	}
	
}

void TestExercise2()
{
	PrintExercise2Path();
}

void TestExercise3()
{
	Graph* g = CreateGraph(9);

	AddDirectedEdge(g->vertexList[0], g->vertexList[1]);
	AddDirectedEdge(g->vertexList[1], g->vertexList[2]);
	AddDirectedEdge(g->vertexList[2], g->vertexList[3]);
	AddDirectedEdge(g->vertexList[3], g->vertexList[0]);
	AddDirectedEdge(g->vertexList[2], g->vertexList[4]);
	AddDirectedEdge(g->vertexList[4], g->vertexList[5]);
	AddDirectedEdge(g->vertexList[5], g->vertexList[6]);
	AddDirectedEdge(g->vertexList[6], g->vertexList[4]);
	AddDirectedEdge(g->vertexList[7], g->vertexList[6]);
	AddDirectedEdge(g->vertexList[7], g->vertexList[8]);

	SCC(g, 9);


	if (g->vertexList[0]->SCCNumber == g->vertexList[3]->SCCNumber && g->vertexList[0]->SCCNumber == g->vertexList[1]->SCCNumber && g->vertexList[0]->SCCNumber == g->vertexList[2]->SCCNumber)
	{
		if (g->vertexList[5]->SCCNumber == g->vertexList[4]->SCCNumber && g->vertexList[5]->SCCNumber == g->vertexList[6]->SCCNumber)
		{
			printf("\nSCC test success!\n");
		}
	}
	else
	{
		printf("\nSCC test Failed!\n");
	}
}

void TestExercise4()
{
	Graph* g1 = CreateGraph1InExercise4();
	Graph* g2 = CreateGraph2InExercise4();

	BellmanFord(g1, g1->vertexList[0], 5);
	BellmanFord(g2, g2->vertexList[0], 5);

	int g1Result[5] = { 0, 2, 7, 4, -2 };
	int g2Result[5] = { 0, 3, 5, 9, 11 };
	int failed = 0;
	for (int i = 0; i < 5; i++)
	{
		if (g1->vertexList[i]->distance != g1Result[i] || g2->vertexList[i]->distance != g2Result[i])
		{
			failed = 1;
		}
	}

	if (failed == 1)
	{
		printf("Weighted graph test failed!\n");
	}
	else
	{
		printf("Weighted graph test success!\n");
	}
}
