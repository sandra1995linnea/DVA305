#include <stdio.h>
#include "Array.h"
#include "list.h"
#include "SortingAlgorithms.h"
#include "Statistics.h"

int main(void)
{
	srand(time(NULL));
	Statistics statistic;

	const int NUMBER_OF_NUMBERS = 1000;

	ElementType* array = CreateArray(NUMBER_OF_NUMBERS);

	//bubbleSortArray(array, NUMBER_OF_NUMBERS, &statistic);

	insertionSortArray(array, NUMBER_OF_NUMBERS, &statistic);

	PrintArray(array, NUMBER_OF_NUMBERS); 
	// TODO: print statistics!
	// TODO: reset statistics!
	

	/*List list = CreateEmptyList();
	
	generateRandomNrToList(&list);

	bubbleSortList(&list, &statistic);

	printList(list, stdout);
	// TODO: print statistics!
	// TODO: reset statistics!
	*/
	return 0;
}
