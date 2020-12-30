#include "SortingAlgorithms.h"
#include "Array.h"
#include "list.h"
#include "Statistics.h"
#include <stdio.h>


void bubbleSortArray(ElementType* array, unsigned int size, Statistics *statistics)
{
	int i, j;
	int swaps = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapElements(&(array[j]), &(array[j + 1]), statistics);
				swaps++;
			}
		}

		if (swaps == 0)
		{
			return;
		}
	}
}

void insertionSortArray(ElementType* array, unsigned int size, Statistics *statistics)
{
	/*looping through the unsorted part of the array*/
	for (int i = 1; i < size; i++)
	{
		int key = array[i];
		/*looping through the sorted part of the array*/
		for (int j = i-1; j >= 0; j--)
		{
			if (key >= array[j])
			{
				break;
			}
			swapElements(&(array[j + 1]), &(array[j]), statistics);
		}
	}
}

void bubbleSortList(List* list, Statistics *statistics)
{
	int swaps = 1; // set to a nonzero number to ensure that we enter the while loop
	while (swaps)
	{
		swaps = 0;
		for (struct node* pointer = *list; (pointer != NULL && pointer->next != NULL); pointer = pointer->next)
		{
			if (pointer->data > pointer->next->data)
			{
				swapElements(&(pointer->data), &(pointer->next->data), statistics);
				swaps++;
			}
		}
	}
}

void inserionSortList(List* list, Statistics *statistics)
{
	for (struct node* pointer = *list; (pointer != NULL && pointer->next != NULL); pointer = pointer->next)
	{

	}

}
