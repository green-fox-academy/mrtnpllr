#include "vector.h"

void init(vector_t* vector)
{
    vector->element = (int*)calloc(2, sizeof(int));
    vector->size = 0;
    vector->capacity = 2;
}

void push_back(vector_t* vector, int element)
{
    if (vector->capacity > vector->size) {
        vector->element[vector->size] = element;
        vector->size++;
    } else if (vector->capacity == vector->size) {
        vector->capacity = 2 * vector->size;
        vector->element = realloc(vector->element, vector->capacity * sizeof(int));
        vector->element[vector->size] = element;
        vector->size++;
    }
}