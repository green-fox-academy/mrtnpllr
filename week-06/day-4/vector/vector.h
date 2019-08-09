#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void pop_back(vector_t* vector);

void insert(vector_t* vector, int element, int index);

bool delete(vector_t* vector, int index);

int size(vector_t* vector);

int capacity(vector_t* vector);

bool empty(vector_t* vector);

int search(vector_t* vector, int value);

vector_t* shuffle(vector_t* vector);

vector_t* sort(vector_t* vector);

vector_t* unique(vector_t* vector);


#endif //VECTOR_VECTOR_H
