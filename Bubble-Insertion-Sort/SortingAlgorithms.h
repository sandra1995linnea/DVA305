#include <stdio.h>
#include "Array.h"
#include "list.h"
#include "Statistics.h"



void bubbleSortArray(ElementType* ArrayToSort, unsigned int size, Statistics* statistics);

void insertionSortArray(ElementType* ArrayToSort, unsigned int size, Statistics* statistics);

void bubbleSortList(List* list, Statistics* statistics);

void insertionSortList(List* list, Statistics* statistics);