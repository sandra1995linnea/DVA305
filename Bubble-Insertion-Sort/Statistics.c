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

