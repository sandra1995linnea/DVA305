#pragma once

#ifndef ARRAY_H
#define ARRAY_H
#include <stdio.h>
#include <stdlib.h>


typedef unsigned int ElementType;

ElementType* CreateArray(size_t size);

void PrintArray(const ElementType* array, size_t size);

#endif 