#pragma once

#ifndef LIST_H
#define LIST_H
#include <stdio.h>


typedef int Data;


/* defineringen av en enkell�nkad lista*/
struct node
{
	Data data;
	struct node* next;

};

typedef struct node* List;

// Returnerar en tom lista
List CreateEmptyList(void);

//l�gger till 1000 random data till listan
void addRandomToList(List* list);

void generateRandomNrToList(const List* list);

void printList(const List list, FILE *textfile);

#endif 