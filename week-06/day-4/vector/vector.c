#include "vector.h"

void init(vector_t *vector)
{
    vector->element = (int *) calloc(2, sizeof(int));
    vector->size = 0;
    vector->capacity = 2;
}

void push_back(vector_t *vector, int element)
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

/*This function should take a vector a value and an index.
 It should insert the new value after the given index. All the elements behind should be shifted to the right.*/

void insert(vector_t *vector, int element, int index)
{
    if (index > vector->size || index < 0) {
        printf("Index number <%d> is out of bound.\n", index);
    } else if (vector->capacity > vector->size) {
        for (int i = vector->size; i >= index; --i) {
            vector->element[i + 1] = vector->element[i];
            //vector->element[i] = vector->element[i + 1];
            printf("element[%d]: %d\n", i, vector->element[i]);
            //printf("element[%d + 1]: %d\n", i, vector->element[i + 1]);
        }
        vector->element[index] = element;
        vector->size++;
    }
}
