#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H


#include <stdio.h>
#include <stdlib.h>
#define bool int
#define TRUE 1
#define FALSE 0

typedef struct vector
{
    int* element;
    int capacity;
    int size;
} vector_t;

void init(vector_t* vector);

void push_back(vector_t* vector, int element);

void insert(vector_t* vector, int element, int index);


#endif //VECTOR_VECTOR_H
