#include "Array.h"
#include <time.h>

ElementType* CreateArray(size_t size)
{
	ElementType* array = (ElementType * )malloc(sizeof(ElementType) * size);

	for (int i = 0; i < size; i++)
	{
		array[i] = rand()%100;
	}

	return array;
}


void PrintArray(const ElementType* array, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", array[i]);

		if (i != size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

