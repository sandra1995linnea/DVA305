#include "SortingAlgorithms.h"
#include "Array.h"
#include "list.h"
#include "Statistics.h"
#include <stdio.h>

clock_t start, end;
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
	start = clock();
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

	end = clock() - start;
	int msec = end * 1000 / CLOCKS_PER_SEC;
	printf("\n\n\nTime taken to sort array with insertionSort is %d milliseconds \n\n\n", msec % 1000);
}

void bubbleSortList(List* list, Statistics *statistics)
{
	start = clock();
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

	end = clock() - start;
	int msec = end * 1000 / CLOCKS_PER_SEC;
	printf("\n\n\nTime taken to sort list with bubbleSort is %d milliseconds \n\n\n", msec % 1000);
}

// a function to insert a new node in a list
void SortedInsert(List* list, struct node* toInsert)
{
	if ((*list) == NULL) // empty list
	{
		(*list) = toInsert;
		toInsert->next = NULL;
	}
	else if ((*list)->data >= toInsert->data)
	{
		// in this case we shall insert the new node first
		toInsert->next = *list;
		(*list) = toInsert;
	}
	else
	{
		// locate the new node before insertion
		struct node* current_node = (*list);
		while (current_node != NULL && current_node->next != NULL && current_node->next->data < toInsert->data)
		{
			current_node = current_node->next;
		}

		// put toInsert after current_node:
		toInsert->next = current_node->next;
		current_node->next = toInsert;
	}
}

void insertionSortList(List* list, Statistics* statistics)
{
	start = clock();
	List sorted = CreateEmptyList();

	struct node* pointer = *list;
	struct node* next;
	/*looping through the unsorted part of the list*/
	while(pointer != NULL)
	{
		next = pointer->next;
		SortedInsert(&sorted, pointer);
		pointer = next;
	}

	*list = sorted;

	end = clock() - start;
	int msec = end * 1000 / CLOCKS_PER_SEC;
	printf("\n\n\nTime taken to sort list with insertionSort is %d milliseconds \n\n\n", msec % 1000);
}
