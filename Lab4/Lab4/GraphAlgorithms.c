#include "GraphAlgorithms.h"

//My representation of the map looks like this:
// 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 
//10 | 11| 12| 13| 14| 15| 16| 17| 18| 19 
//20 | 21| 22| 23| 24| 25| 26| 27| 28| 29
//30 | 31| 32| 33| 34| 35| 36| 37| 38| 39 
//40 | 41| 42| 43| 44| 45| 46| 47| 48| 49
//50 | 51| 52| 53| 54| 55| 56| 57| 58| 59 
//60 | 61| 62| 63| 64| 65| 66| 67| 68| 69 
//70 | 71| 72| 73| 74| 75| 76| 77| 78| 79 
//80 | 81| 82| 83| 84| 85| 86| 87| 88| 89 
//90 | 91| 92| 93| 94| 95| 96| 97| 98| 99 
//
//Where the numbers represent the index of the vertex in a list.
Graph* CreateGraphAndEdgesExercise2()
{
	Graph* graph = CreateGraph(100);

	//1,1
	AddDirectedEdge(graph->vertexList[0], graph->vertexList[1]);
	AddDirectedEdge(graph->vertexList[0], graph->vertexList[10]);
	
	//1,2
	AddDirectedEdge(graph->vertexList[1], graph->vertexList[0]);
	AddDirectedEdge(graph->vertexList[1], graph->vertexList[2]);
	AddDirectedEdge(graph->vertexList[1], graph->vertexList[11]);

	//1,3
	AddDirectedEdge(graph->vertexList[2], graph->vertexList[1]);
	AddDirectedEdge(graph->vertexList[2], graph->vertexList[12]);
	AddDirectedEdge(graph->vertexList[2], graph->vertexList[3]);

	//1,4
	AddDirectedEdge(graph->vertexList[3], graph->vertexList[2]);
	AddDirectedEdge(graph->vertexList[3], graph->vertexList[13]);

	//1,5

	//1,6
	AddDirectedEdge(graph->vertexList[5], graph->vertexList[6]);
	AddDirectedEdge(graph->vertexList[5], graph->vertexList[15]);

	//1.7
	AddDirectedEdge(graph->vertexList[6], graph->vertexList[5]);
	AddDirectedEdge(graph->vertexList[6], graph->vertexList[7]);
	AddDirectedEdge(graph->vertexList[6], graph->vertexList[16]);

	//1,8
	AddDirectedEdge(graph->vertexList[7], graph->vertexList[6]);
	AddDirectedEdge(graph->vertexList[7], graph->vertexList[8]);
	AddDirectedEdge(graph->vertexList[7], graph->vertexList[17]);

	//1,9
	AddDirectedEdge(graph->vertexList[8], graph->vertexList[7]);
	AddDirectedEdge(graph->vertexList[8], graph->vertexList[9]);
	AddDirectedEdge(graph->vertexList[8], graph->vertexList[18]);

	//1,10
	AddDirectedEdge(graph->vertexList[9], graph->vertexList[8]);
	AddDirectedEdge(graph->vertexList[9], graph->vertexList[19]);



	//2,1
	AddDirectedEdge(graph->vertexList[10], graph->vertexList[0]);
	AddDirectedEdge(graph->vertexList[10], graph->vertexList[11]);
	AddDirectedEdge(graph->vertexList[10], graph->vertexList[20]);

	//2,2
	AddDirectedEdge(graph->vertexList[11], graph->vertexList[1]);
	AddDirectedEdge(graph->vertexList[11], graph->vertexList[21]);
	AddDirectedEdge(graph->vertexList[11], graph->vertexList[10]);
	AddDirectedEdge(graph->vertexList[11], graph->vertexList[12]);

	//2,3
	AddDirectedEdge(graph->vertexList[12], graph->vertexList[2]);
	AddDirectedEdge(graph->vertexList[12], graph->vertexList[22]);
	AddDirectedEdge(graph->vertexList[12], graph->vertexList[11]);
	AddDirectedEdge(graph->vertexList[12], graph->vertexList[13]);

	//2,4
	AddDirectedEdge(graph->vertexList[13], graph->vertexList[3]);
	AddDirectedEdge(graph->vertexList[13], graph->vertexList[12]);
	AddDirectedEdge(graph->vertexList[13], graph->vertexList[23]);

	//2,5

	//2,6
	AddDirectedEdge(graph->vertexList[15], graph->vertexList[16]);
	AddDirectedEdge(graph->vertexList[15], graph->vertexList[25]);
	AddDirectedEdge(graph->vertexList[15], graph->vertexList[5]);

	//2,7
	AddDirectedEdge(graph->vertexList[16], graph->vertexList[15]);
	AddDirectedEdge(graph->vertexList[16], graph->vertexList[6]);
	AddDirectedEdge(graph->vertexList[16], graph->vertexList[17]);
	AddDirectedEdge(graph->vertexList[16], graph->vertexList[26]);

	//2,8
	AddDirectedEdge(graph->vertexList[17], graph->vertexList[16]);
	AddDirectedEdge(graph->vertexList[17], graph->vertexList[7]);
	AddDirectedEdge(graph->vertexList[17], graph->vertexList[18]);
	AddDirectedEdge(graph->vertexList[17], graph->vertexList[27]);

	//2,9
	AddDirectedEdge(graph->vertexList[18], graph->vertexList[17]);
	AddDirectedEdge(graph->vertexList[18], graph->vertexList[8]);
	AddDirectedEdge(graph->vertexList[18], graph->vertexList[19]);
	AddDirectedEdge(graph->vertexList[18], graph->vertexList[28]);

	//2,10
	AddDirectedEdge(graph->vertexList[19], graph->vertexList[18]);
	AddDirectedEdge(graph->vertexList[19], graph->vertexList[9]);
	AddDirectedEdge(graph->vertexList[19], graph->vertexList[29]);


	//3,1
	AddDirectedEdge(graph->vertexList[20], graph->vertexList[10]);
	AddDirectedEdge(graph->vertexList[20], graph->vertexList[21]);
	AddDirectedEdge(graph->vertexList[20], graph->vertexList[30]);

	//3,2
	AddDirectedEdge(graph->vertexList[21], graph->vertexList[20]);
	AddDirectedEdge(graph->vertexList[21], graph->vertexList[11]);
	AddDirectedEdge(graph->vertexList[21], graph->vertexList[22]);
	AddDirectedEdge(graph->vertexList[21], graph->vertexList[31]);

	//3,3
	AddDirectedEdge(graph->vertexList[22], graph->vertexList[21]);
	AddDirectedEdge(graph->vertexList[22], graph->vertexList[12]);
	AddDirectedEdge(graph->vertexList[22], graph->vertexList[23]);
	AddDirectedEdge(graph->vertexList[22], graph->vertexList[32]);

	//3,4
	AddDirectedEdge(graph->vertexList[23], graph->vertexList[22]);
	AddDirectedEdge(graph->vertexList[23], graph->vertexList[13]);
	AddDirectedEdge(graph->vertexList[23], graph->vertexList[33]);

	//3,5

	//3,6
	AddDirectedEdge(graph->vertexList[25], graph->vertexList[15]);
	AddDirectedEdge(graph->vertexList[25], graph->vertexList[26]);
	AddDirectedEdge(graph->vertexList[25], graph->vertexList[35]);

	//3,7
	AddDirectedEdge(graph->vertexList[26], graph->vertexList[25]);
	AddDirectedEdge(graph->vertexList[26], graph->vertexList[16]);
	AddDirectedEdge(graph->vertexList[26], graph->vertexList[27]);
	AddDirectedEdge(graph->vertexList[26], graph->vertexList[36]);

	//3,8
	AddDirectedEdge(graph->vertexList[27], graph->vertexList[26]);
	AddDirectedEdge(graph->vertexList[27], graph->vertexList[17]);
	AddDirectedEdge(graph->vertexList[27], graph->vertexList[28]);
	AddDirectedEdge(graph->vertexList[27], graph->vertexList[37]);

	//3,9
	AddDirectedEdge(graph->vertexList[28], graph->vertexList[27]);
	AddDirectedEdge(graph->vertexList[28], graph->vertexList[18]);
	AddDirectedEdge(graph->vertexList[28], graph->vertexList[38]);
	AddDirectedEdge(graph->vertexList[28], graph->vertexList[29]);

	//3,10
	AddDirectedEdge(graph->vertexList[29], graph->vertexList[28]);
	AddDirectedEdge(graph->vertexList[29], graph->vertexList[19]);
	AddDirectedEdge(graph->vertexList[29], graph->vertexList[39]);

	//4,1
	AddDirectedEdge(graph->vertexList[30], graph->vertexList[31]);
	AddDirectedEdge(graph->vertexList[30], graph->vertexList[20]);
	AddDirectedEdge(graph->vertexList[30], graph->vertexList[40]);

	//4,2
	AddDirectedEdge(graph->vertexList[31], graph->vertexList[30]);
	AddDirectedEdge(graph->vertexList[31], graph->vertexList[21]);
	AddDirectedEdge(graph->vertexList[31], graph->vertexList[32]);
	AddDirectedEdge(graph->vertexList[31], graph->vertexList[41]);

	//4,3
	AddDirectedEdge(graph->vertexList[32], graph->vertexList[31]);
	AddDirectedEdge(graph->vertexList[32], graph->vertexList[22]);
	AddDirectedEdge(graph->vertexList[32], graph->vertexList[33]);
	AddDirectedEdge(graph->vertexList[32], graph->vertexList[42]);

	//4,4
	AddDirectedEdge(graph->vertexList[33], graph->vertexList[32]);
	AddDirectedEdge(graph->vertexList[33], graph->vertexList[23]);
	AddDirectedEdge(graph->vertexList[33], graph->vertexList[43]);

	//4,5

	//4,6
	AddDirectedEdge(graph->vertexList[35], graph->vertexList[25]);
	AddDirectedEdge(graph->vertexList[35], graph->vertexList[36]);

	//4,7
	AddDirectedEdge(graph->vertexList[36], graph->vertexList[26]);
	AddDirectedEdge(graph->vertexList[36], graph->vertexList[35]);
	AddDirectedEdge(graph->vertexList[36], graph->vertexList[37]);

	//4,8
	AddDirectedEdge(graph->vertexList[37], graph->vertexList[27]);
	AddDirectedEdge(graph->vertexList[37], graph->vertexList[36]);
	AddDirectedEdge(graph->vertexList[37], graph->vertexList[38]);

	//4,9
	AddDirectedEdge(graph->vertexList[38], graph->vertexList[28]);
	AddDirectedEdge(graph->vertexList[38], graph->vertexList[37]);
	AddDirectedEdge(graph->vertexList[38], graph->vertexList[39]);

	//4,10
	AddDirectedEdge(graph->vertexList[39], graph->vertexList[29]);
	AddDirectedEdge(graph->vertexList[39], graph->vertexList[38]);
	AddDirectedEdge(graph->vertexList[39], graph->vertexList[49]);

	//5,1
	AddDirectedEdge(graph->vertexList[40], graph->vertexList[30]);
	AddDirectedEdge(graph->vertexList[40], graph->vertexList[41]);
	AddDirectedEdge(graph->vertexList[40], graph->vertexList[50]);

	//5,2
	AddDirectedEdge(graph->vertexList[41], graph->vertexList[31]);
	AddDirectedEdge(graph->vertexList[41], graph->vertexList[40]);
	AddDirectedEdge(graph->vertexList[41], graph->vertexList[51]);
	AddDirectedEdge(graph->vertexList[41], graph->vertexList[42]);

	//5,3
	AddDirectedEdge(graph->vertexList[42], graph->vertexList[32]);
	AddDirectedEdge(graph->vertexList[42], graph->vertexList[41]);
	AddDirectedEdge(graph->vertexList[42], graph->vertexList[43]);
	AddDirectedEdge(graph->vertexList[42], graph->vertexList[52]);

	//5,4
	AddDirectedEdge(graph->vertexList[43], graph->vertexList[33]);
	AddDirectedEdge(graph->vertexList[43], graph->vertexList[42]);
	AddDirectedEdge(graph->vertexList[43], graph->vertexList[53]);

	//5,5

	//5,6

	//5,7

	//5,8

	//5,9

	//5,10
	AddDirectedEdge(graph->vertexList[49], graph->vertexList[39]);
	AddDirectedEdge(graph->vertexList[49], graph->vertexList[59]);

	//6,1
	AddDirectedEdge(graph->vertexList[50], graph->vertexList[40]);
	AddDirectedEdge(graph->vertexList[50], graph->vertexList[60]);
	AddDirectedEdge(graph->vertexList[50], graph->vertexList[51]);

	//6,2
	AddDirectedEdge(graph->vertexList[51], graph->vertexList[50]);
	AddDirectedEdge(graph->vertexList[51], graph->vertexList[52]);
	AddDirectedEdge(graph->vertexList[51], graph->vertexList[61]);
	AddDirectedEdge(graph->vertexList[51], graph->vertexList[41]);

	//6,3
	AddDirectedEdge(graph->vertexList[52], graph->vertexList[51]);
	AddDirectedEdge(graph->vertexList[52], graph->vertexList[53]);
	AddDirectedEdge(graph->vertexList[52], graph->vertexList[62]);
	AddDirectedEdge(graph->vertexList[52], graph->vertexList[42]);

	//6,4
	AddDirectedEdge(graph->vertexList[53], graph->vertexList[52]);
	AddDirectedEdge(graph->vertexList[53], graph->vertexList[43]);
	AddDirectedEdge(graph->vertexList[53], graph->vertexList[63]);

	//6,5

	//6,6
	AddDirectedEdge(graph->vertexList[55], graph->vertexList[56]);
	AddDirectedEdge(graph->vertexList[55], graph->vertexList[65]);

	//6,7
	AddDirectedEdge(graph->vertexList[56], graph->vertexList[55]);
	AddDirectedEdge(graph->vertexList[56], graph->vertexList[57]);
	AddDirectedEdge(graph->vertexList[56], graph->vertexList[66]);

	//6,8
	AddDirectedEdge(graph->vertexList[57], graph->vertexList[67]);
	AddDirectedEdge(graph->vertexList[57], graph->vertexList[56]);
	AddDirectedEdge(graph->vertexList[57], graph->vertexList[58]);

	//6,9
	AddDirectedEdge(graph->vertexList[58], graph->vertexList[57]);
	AddDirectedEdge(graph->vertexList[58], graph->vertexList[59]);
	AddDirectedEdge(graph->vertexList[58], graph->vertexList[68]);

	//6,10
	AddDirectedEdge(graph->vertexList[59], graph->vertexList[49]);
	AddDirectedEdge(graph->vertexList[59], graph->vertexList[58]);
	AddDirectedEdge(graph->vertexList[59], graph->vertexList[69]);

	//7,1
	AddDirectedEdge(graph->vertexList[60], graph->vertexList[50]);
	AddDirectedEdge(graph->vertexList[60], graph->vertexList[70]);
	AddDirectedEdge(graph->vertexList[60], graph->vertexList[61]);

	//7,2
	AddDirectedEdge(graph->vertexList[61], graph->vertexList[60]);
	AddDirectedEdge(graph->vertexList[61], graph->vertexList[62]);
	AddDirectedEdge(graph->vertexList[61], graph->vertexList[71]);
	AddDirectedEdge(graph->vertexList[61], graph->vertexList[51]);

	//7,3
	AddDirectedEdge(graph->vertexList[62], graph->vertexList[61]);
	AddDirectedEdge(graph->vertexList[62], graph->vertexList[63]);
	AddDirectedEdge(graph->vertexList[62], graph->vertexList[52]);
	AddDirectedEdge(graph->vertexList[62], graph->vertexList[72]);

	//7,4
	AddDirectedEdge(graph->vertexList[63], graph->vertexList[62]);
	AddDirectedEdge(graph->vertexList[63], graph->vertexList[73]);
	AddDirectedEdge(graph->vertexList[63], graph->vertexList[53]);

	//7,5

	//7,6
	AddDirectedEdge(graph->vertexList[65], graph->vertexList[55]);
	AddDirectedEdge(graph->vertexList[65], graph->vertexList[75]);
	AddDirectedEdge(graph->vertexList[65], graph->vertexList[66]);

	//7,7
	AddDirectedEdge(graph->vertexList[66], graph->vertexList[65]);
	AddDirectedEdge(graph->vertexList[66], graph->vertexList[67]);
	AddDirectedEdge(graph->vertexList[66], graph->vertexList[56]);
	AddDirectedEdge(graph->vertexList[66], graph->vertexList[76]);

	//7,8
	AddDirectedEdge(graph->vertexList[67], graph->vertexList[66]);
	AddDirectedEdge(graph->vertexList[67], graph->vertexList[68]);
	AddDirectedEdge(graph->vertexList[67], graph->vertexList[57]);
	AddDirectedEdge(graph->vertexList[67], graph->vertexList[77]);

	//7,9
	AddDirectedEdge(graph->vertexList[68], graph->vertexList[67]);
	AddDirectedEdge(graph->vertexList[68], graph->vertexList[69]);
	AddDirectedEdge(graph->vertexList[68], graph->vertexList[78]);
	AddDirectedEdge(graph->vertexList[68], graph->vertexList[58]);

	//7,10
	AddDirectedEdge(graph->vertexList[69], graph->vertexList[68]);
	AddDirectedEdge(graph->vertexList[69], graph->vertexList[59]);
	AddDirectedEdge(graph->vertexList[69], graph->vertexList[79]);

	//8,1
	AddDirectedEdge(graph->vertexList[70], graph->vertexList[60]);
	AddDirectedEdge(graph->vertexList[70], graph->vertexList[80]);
	AddDirectedEdge(graph->vertexList[70], graph->vertexList[71]);

	//8,2
	AddDirectedEdge(graph->vertexList[71], graph->vertexList[61]);
	AddDirectedEdge(graph->vertexList[71], graph->vertexList[70]);
	AddDirectedEdge(graph->vertexList[71], graph->vertexList[72]);

	//8,3
	AddDirectedEdge(graph->vertexList[72], graph->vertexList[71]);
	AddDirectedEdge(graph->vertexList[72], graph->vertexList[73]);
	AddDirectedEdge(graph->vertexList[72], graph->vertexList[62]);

	//8,4
	AddDirectedEdge(graph->vertexList[73], graph->vertexList[63]);
	AddDirectedEdge(graph->vertexList[73], graph->vertexList[72]);

	//8,5

	//8,6
	AddDirectedEdge(graph->vertexList[75], graph->vertexList[75]);
	AddDirectedEdge(graph->vertexList[75], graph->vertexList[65]);
	AddDirectedEdge(graph->vertexList[75], graph->vertexList[85]);

	//8,7
	AddDirectedEdge(graph->vertexList[76], graph->vertexList[75]);
	AddDirectedEdge(graph->vertexList[76], graph->vertexList[77]);
	AddDirectedEdge(graph->vertexList[76], graph->vertexList[66]);
	AddDirectedEdge(graph->vertexList[76], graph->vertexList[86]);

	//8,8
	AddDirectedEdge(graph->vertexList[77], graph->vertexList[76]);
	AddDirectedEdge(graph->vertexList[77], graph->vertexList[78]);
	AddDirectedEdge(graph->vertexList[77], graph->vertexList[67]);
	AddDirectedEdge(graph->vertexList[77], graph->vertexList[87]);

	//8,9
	AddDirectedEdge(graph->vertexList[78], graph->vertexList[77]);
	AddDirectedEdge(graph->vertexList[78], graph->vertexList[79]);
	AddDirectedEdge(graph->vertexList[78], graph->vertexList[68]);
	AddDirectedEdge(graph->vertexList[78], graph->vertexList[88]);

	//8,10
	AddDirectedEdge(graph->vertexList[79], graph->vertexList[78]);
	AddDirectedEdge(graph->vertexList[79], graph->vertexList[69]);
	AddDirectedEdge(graph->vertexList[79], graph->vertexList[89]);

	//9,1
	AddDirectedEdge(graph->vertexList[80], graph->vertexList[70]);
	AddDirectedEdge(graph->vertexList[80], graph->vertexList[90]);

	//9,2

	//9,3

	//9,4

	//9,5

	//9,6
	AddDirectedEdge(graph->vertexList[85], graph->vertexList[75]);
	AddDirectedEdge(graph->vertexList[85], graph->vertexList[95]);
	AddDirectedEdge(graph->vertexList[85], graph->vertexList[86]);

	//9,7
	AddDirectedEdge(graph->vertexList[86], graph->vertexList[76]);
	AddDirectedEdge(graph->vertexList[86], graph->vertexList[96]);
	AddDirectedEdge(graph->vertexList[86], graph->vertexList[85]);
	AddDirectedEdge(graph->vertexList[86], graph->vertexList[87]);

	//9,8
	AddDirectedEdge(graph->vertexList[87], graph->vertexList[77]);
	AddDirectedEdge(graph->vertexList[87], graph->vertexList[97]);
	AddDirectedEdge(graph->vertexList[87], graph->vertexList[86]);
	AddDirectedEdge(graph->vertexList[87], graph->vertexList[88]);

	//9,9
	AddDirectedEdge(graph->vertexList[88], graph->vertexList[78]);
	AddDirectedEdge(graph->vertexList[88], graph->vertexList[98]);
	AddDirectedEdge(graph->vertexList[88], graph->vertexList[87]);
	AddDirectedEdge(graph->vertexList[88], graph->vertexList[89]);

	//9,10
	AddDirectedEdge(graph->vertexList[89], graph->vertexList[79]);
	AddDirectedEdge(graph->vertexList[89], graph->vertexList[99]);
	AddDirectedEdge(graph->vertexList[89], graph->vertexList[88]);

	//10,1
	AddDirectedEdge(graph->vertexList[90], graph->vertexList[80]);
	AddDirectedEdge(graph->vertexList[90], graph->vertexList[91]);

	//10,2
	AddDirectedEdge(graph->vertexList[91], graph->vertexList[90]);
	AddDirectedEdge(graph->vertexList[91], graph->vertexList[92]);

	//10,3
	AddDirectedEdge(graph->vertexList[92], graph->vertexList[91]);
	AddDirectedEdge(graph->vertexList[92], graph->vertexList[93]);

	//10,4
	AddDirectedEdge(graph->vertexList[93], graph->vertexList[92]);
	AddDirectedEdge(graph->vertexList[93], graph->vertexList[94]);

	//10,5
	AddDirectedEdge(graph->vertexList[94], graph->vertexList[93]);
	AddDirectedEdge(graph->vertexList[94], graph->vertexList[95]);

	//10,6
	AddDirectedEdge(graph->vertexList[95], graph->vertexList[94]);
	AddDirectedEdge(graph->vertexList[95], graph->vertexList[96]);
	AddDirectedEdge(graph->vertexList[95], graph->vertexList[85]);

	//10,7
	AddDirectedEdge(graph->vertexList[96], graph->vertexList[86]);
	AddDirectedEdge(graph->vertexList[96], graph->vertexList[95]);
	AddDirectedEdge(graph->vertexList[96], graph->vertexList[97]);

	//10,8
	AddDirectedEdge(graph->vertexList[97], graph->vertexList[87]);
	AddDirectedEdge(graph->vertexList[97], graph->vertexList[96]);
	AddDirectedEdge(graph->vertexList[97], graph->vertexList[98]);

	//10,9
	AddDirectedEdge(graph->vertexList[98], graph->vertexList[97]);
	AddDirectedEdge(graph->vertexList[98], graph->vertexList[99]);
	AddDirectedEdge(graph->vertexList[98], graph->vertexList[88]);

	//10,10
	AddDirectedEdge(graph->vertexList[99], graph->vertexList[98]);
	AddDirectedEdge(graph->vertexList[99], graph->vertexList[89]);
	


	return graph;
}

//Prints the fastest path from 1,1 to 6,1
void PrintExercise2Path()
{
	Graph* g = CreateGraphAndEdgesExercise2();


	BellmanFordNoWeight(g, g->vertexList[0], 100);

	g->vertexList[5]->distance;

	Vertex* target = g->vertexList[5];
	Vertex* temp = g->vertexList[5];
	Vertex* source = g->vertexList[0];
	printf("\n  Exercise 2  \n");
	printf("The fastest way from %d to %d is\n", source->number, target->number);
	while (temp != source)
	{
		printf("%d\n", temp->prev->number);
		temp = temp->prev;
	}
}

Graph* CreateGraph1InExercise4()
{
	Graph* graph = CreateGraph(5);

	AddDirectedWeightedEdge(graph->vertexList[0], graph->vertexList[1], 6);
	AddDirectedWeightedEdge(graph->vertexList[0], graph->vertexList[2], 7);
	AddDirectedWeightedEdge(graph->vertexList[1], graph->vertexList[2], 8);
	AddDirectedWeightedEdge(graph->vertexList[1], graph->vertexList[4], -4);
	AddDirectedWeightedEdge(graph->vertexList[1], graph->vertexList[3], 5);
	AddDirectedWeightedEdge(graph->vertexList[2], graph->vertexList[3], -3);
	AddDirectedWeightedEdge(graph->vertexList[2], graph->vertexList[4], 9);
	AddDirectedWeightedEdge(graph->vertexList[3], graph->vertexList[1], -2);
	AddDirectedWeightedEdge(graph->vertexList[4], graph->vertexList[0], 2);
	AddDirectedWeightedEdge(graph->vertexList[4], graph->vertexList[3], 7);

	return graph;
}

Graph* CreateGraph2InExercise4()
{
	Graph* graph = CreateGraph(5);

	AddDirectedWeightedEdge(graph->vertexList[0], graph->vertexList[1], 3);
	AddDirectedWeightedEdge(graph->vertexList[0], graph->vertexList[2], 5);
	AddDirectedWeightedEdge(graph->vertexList[4], graph->vertexList[0], 3);
	AddDirectedWeightedEdge(graph->vertexList[1], graph->vertexList[2], 2);
	AddDirectedWeightedEdge(graph->vertexList[1], graph->vertexList[3], 6);
	AddDirectedWeightedEdge(graph->vertexList[2], graph->vertexList[1], 1);
	AddDirectedWeightedEdge(graph->vertexList[2], graph->vertexList[4], 6);
	AddDirectedWeightedEdge(graph->vertexList[2], graph->vertexList[3], 4);
	AddDirectedWeightedEdge(graph->vertexList[4], graph->vertexList[3], 7);
	AddDirectedWeightedEdge(graph->vertexList[3], graph->vertexList[4], 2);

	return graph;
}

void InitializeSingleSource(Graph* graph, Vertex* source, int numberOfVertices)
{
	for (int i = 0; i < numberOfVertices; i++)
	{
		graph->vertexList[i]->distance = 214748364; //Biggest number an int can be to represent infinity
		graph->vertexList[i]->prev = NULL;
	}
	source->distance = 0;
}

void RelaxNoWeight(Vertex* from, Vertex* to)
{
	if (to->distance > from->distance + 1)
	{
		to->distance = from->distance + 1;
		to->prev = from;
	}
}

int BellmanFordNoWeight(Graph* graph, Vertex* source, int numberOfVertices)
{
	if (graph == NULL || source == NULL)
	{
		return 0;
	}
	InitializeSingleSource(graph, source, numberOfVertices);

	for (int i = 0; i < numberOfVertices - 1; i++)
	{
		for (int i = 0; i < numberOfVertices; i++)
		{
			Edge* temp = graph->vertexList[i]->head;
			while (temp != NULL)
			{
				RelaxNoWeight(graph->vertexList[i], temp->vertex);
				temp = temp->next;
			}
		}
	}

	return 1;
}


void Relax(Vertex* from, Vertex* to, int weight)
{
	if (to->distance > from->distance + weight)
	{
		to->distance = from->distance + weight;
		to->prev = from;
	}
}

int BellmanFord(Graph* graph, Vertex* source, int numberOfVertices)
{
	if (graph == NULL || source == NULL)
	{
		return 0;
	}
	InitializeSingleSource(graph, source, numberOfVertices);

	for (int i = 0; i < numberOfVertices - 1; i++)
	{
		for (int i = 0; i < numberOfVertices; i++)
		{
			Edge* temp = graph->vertexList[i]->head;
			while (temp != NULL)
			{
				Relax(graph->vertexList[i], temp->vertex, temp->weight);
				temp = temp->next;
			}
		}
	}

	return 1;
}

int time = 0;

void DFS(Graph* graph, int size, Stack* stack)
{
	if (graph == NULL || stack == NULL)
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		graph->vertexList[i]->color = 'W';
		graph->vertexList[i]->prev = NULL;
	}
	time = 0;

	for (int i = 0; i < size; i++)
	{
		if (graph->vertexList[i]->color == 'W')
		{
			DFSVisit(graph, graph->vertexList[i], stack);
		}
	}
}


void DFSVisit(Graph* graph, Vertex* vertex, Stack* stack)
{
	time = time + 1;
	vertex->discovered = time;
	vertex->color = 'G';

	Edge* temp = vertex->head;
	while (temp != NULL)
	{
		if (temp->vertex->color == 'W')
		{
			temp->vertex->prev = vertex;
			DFSVisit(graph, temp->vertex, stack);
		}
		temp = temp->next;
	}
		
	

	vertex->color = 'B';
	time= time + 1;
	Push(stack, vertex);
	vertex->finished = time;
}

int index = 1;

void DFS2(Graph* graph, Vertex* source)
{
	if (graph == NULL || source == NULL)
	{
		return;
	}
	if (source->color == 'W')
	{
		//printf("\nSCC #%d", index);
		source->SCCNumber = index;
		//printf(" = %d", source->number);
		DFSVisit2(graph, source);
		index++;
	}
}

void DFSVisit2(Graph* graph, Vertex* vertex)
{
	time = time + 1;
	vertex->discovered = time;
	vertex->color = 'G';

	Edge* temp = vertex->head;
	while (temp != NULL)
	{
		if (temp->vertex->discovered == 0)
		{
			temp->vertex->SCCNumber = index;
			//printf(", %d", temp->vertex->number);
		}
		if (temp->vertex->color == 'W')
		{
			temp->vertex->prev = vertex;
			DFSVisit2(graph, temp->vertex);
		}
		temp = temp->next;
	}



	vertex->color = 'B';
	time = time + 1;
	vertex->finished = time;
}


Graph* TransposeGraph(Graph* graph, int size)
{
	if (graph == NULL)
	{
		return NULL;
	}
	Graph* newGraph = CreateGraph(size);
	//Transpose the graph
	for (int i = 0; i < size; i++)
	{
		List* list = GetInNeighbors(graph, graph->vertexList[i]);
		int first = 1;
		while (list->head != NULL)
		{
			if (first == 1)
			{
				//graph->vertexList[list->head->vertex->number]->head = NULL;
				AddDirectedEdge(newGraph->vertexList[graph->vertexList[i]->number], newGraph->vertexList[graph->vertexList[list->head->vertex->number]->number]);
				first = 0;
			}
			else
			{
				AddDirectedEdge(newGraph->vertexList[graph->vertexList[i]->number], newGraph->vertexList[graph->vertexList[list->head->vertex->number]->number]);
			}
			list->head = list->head->next;
		}
	}
	return newGraph;
}


void SCC(Graph* graph, int size)
{
	if (graph == NULL)
	{
		return;
	}
	Stack* stack = CreateStack();
	DFS(graph, size, stack);


	Graph* newGraph = TransposeGraph(graph, size);
	


	for (int i = 0; i < size; i++)
	{
		newGraph->vertexList[i]->discovered = 0;
		newGraph->vertexList[i]->color = 'W';

	}

	while (StackEmpty(stack) != 1)
	{
		Vertex* temp = Pop(stack);
		while (temp->discovered == 1 && StackEmpty(stack) != 1)
		{
			temp = Pop(stack);
		}
		DFS2(newGraph, newGraph->vertexList[temp->number]);
	}
	for (int i = 0; i < size; i++)
	{
		graph->vertexList[i]->SCCNumber = newGraph->vertexList[i]->SCCNumber;
	}
}

