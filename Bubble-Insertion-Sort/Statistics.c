#include "Statistics.h"
#include <assert.h>

void swapElements(int *element1, int *element2, Statistics* statistics)
{
	assert(element1 != NULL && element2 != NULL);

	int temp = *element1;
	*element1 = *element2;
	*element2 = temp;

	if (statistics)
	{
		statistics->swaps++;
	}
}

void resetStatistics(Statistics* statistics)
{
	assert(statistics != NULL);

	statistics->comparsions = 0;
	statistics->swaps = 0;
}

void printStatistics(const Statistics* statistics)
{
	assert(statistics != NULL);
	

	printf("%5u comparsions, %5u swaps", statistics->comparsions, statistics->swaps);
}

