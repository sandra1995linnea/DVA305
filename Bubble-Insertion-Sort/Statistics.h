#pragma once
#ifndef STATISTICS_H
#define STATISTICS_H
#include <stdio.h>

struct statistics {
	unsigned int comparsions;
	unsigned int swaps;
};

typedef struct statistics Statistics;

void swapElements(int* element1, int* element2, Statistics* statistics);

void printStatistics();

#endif 
