#include <stdio.h>
#include <stdlib.h>

#include "BinarySearchTree.h"


//Takes a tree and load a file into it.
void AddToTree(BinarySearchTree* binarySearchTree);

//Run all tests
void RunTests();

//Test for the functions TreeMinimum and TreeMaximum. Returns 1 if the result is expected and 0 if it is wrong.
int TestMinMax();
//Test for the functions TreeSuccessor and TreePredecessor. Returns 1 if the result is expected and 0 if it is wrong.
int TestSucPre();
//Test the depth and count function. Return 1 if correct, 0 if wrong.
int TestDepthAndCount();
//Test that prints out the BST in ascending order
int TestPrintAsc();