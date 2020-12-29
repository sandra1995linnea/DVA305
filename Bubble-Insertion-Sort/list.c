#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

static struct node* CreateListNode(const Data data)
{
	struct node* listNode = calloc(1, sizeof(struct node));

	if (listNode != NULL)
	{
		listNode->data = data;
		listNode->next = NULL;
	}
	else
	{
		printf("Error: calloc returned NULL");
	}

	return listNode;
}


List CreateEmptyList(void)
{
	return NULL;
}

//en addFirst funktion som lägger till 1000 randomiserade tal
void addRandomToList(List *list)
{
	Data data = rand() % 100;
	struct node *my_node = CreateListNode(data);

	if (my_node == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		my_node->next = *list;
		*list = my_node;
	}
}

void generateRandomNrToList(const List* list)
{
	for (int i = 0; i < 1000; i++)
	{
		addRandomToList(list);
	}
}

// skriver ut allt som finns i listan
void printList(const List list, FILE *textfile)
{
	if (list != NULL)
	{
		fprintf(textfile, "%d\n", list->data);
		printList(list->next, textfile);
	}
}