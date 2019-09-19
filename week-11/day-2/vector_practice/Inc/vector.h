#ifndef __VECTOR_VECTOR_H
#define __VECTOR_VECTOR_H


#include "cmsis_os.h"

typedef struct vector{
	int capacity;
	int size;
	int* data;
}vector_t;

vector_t* realloc_vector(vector_t* vector);

void vector_init(vector_t* vector);

void vector_push_back(vector_t* vector, int data);

void vector_pop_back(vector_t* vector);

void vector_erase(vector_t* vector, int index); //removes an element from the index position

int vector_size(vector_t* vector);

int vector_get(vector_t* vector, int index);


#endif
