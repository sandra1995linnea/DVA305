#define CLOCKS_PER_SEC 
#include <stdio.h>
#include "Array.h"
#include "list.h"
#include "SortingAlgorithms.h"
#include "Statistics.h"
#include <time.h>
#include <stdlib.h>


int main(void)
{
	clock_t start;
	clock_t end;

	srand(time(NULL));
	Statistics statistic;

	const int NUMBER_OF_NUMBERS = 1000;

	ElementType* array = CreateArray(NUMBER_OF_NUMBERS);

	//List list = CreateEmptyList();
	//generateRandomNrToList(&list);
	start = clock();

	insertionSortArray(array, NUMBER_OF_NUMBERS, &statistic);
	//bubbleSortArray(array, NUMBER_OF_NUMBERS, &statistic);
	
	PrintArray(array, NUMBER_OF_NUMBERS); 

	//bubbleSortList(&list, &statistic);

	//insertionSortList(&list, &statistic);

	//printList(list, stdout);

	end = clock() - start;
	int msec = end * 1000 / CLOCKS_PER_SEC;
	printf("\n\n\nTime taken to sort array with insertionSort is %d milliseconds \n\n\n", msec % 1000);
	//printf("\n\n\nTime taken to sort array with bubbleSort is %d milliseconds \n\n\n", msec % 1000);
	

	//printf("\n\n\nTime taken to sort list with insertionSort is %d milliseconds \n\n\n", msec % 1000);
	//(printf("\n\n\nTime taken to sort list with bubbleSort is %d milliseconds \n\n\n", msec % 1000);


	return 0;
}
