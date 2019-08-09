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

void pop_back(vector_t *vector)
{
    vector->size = vector->size - 1;

    if (vector->capacity / 2 == vector->size) {
        vector->capacity = vector->capacity - (vector->capacity / 4);
        vector->element = realloc(vector->element, vector->capacity * sizeof(int));
    }
}

void insert(vector_t *vector, int element, int index)
{
    if (index > vector->size || index < 0) {
        printf("Index number <%d> is out of bound.\n", index);
    } else if (vector->capacity > vector->size) {
        for (int i = vector->size - 1; i >= index; --i) {
            vector->element[i + 1] = vector->element[i];
            //vector->element[i] = vector->element[i + 1]; //This was a funny case
        }

        vector->element[index] = element;
        vector->size++;

    } else if (vector->capacity == vector->size) {
        vector->capacity = 2 * vector->size;
        vector->element = realloc(vector->element, vector->capacity * sizeof(int));

        for (int i = vector->size - 1; i >= index; --i) {
            vector->element[i + 1] = vector->element[i];
        }

        vector->element[index] = element;
        vector->size++;
    }
}

/*This function should take a vector and an index as parameters. It should delete the element at the specified index if that is valid.
If the index is out of range it should return 0. If the deletion is successful it should return 1.*/

bool delete(vector_t *vector, int index)
{
    if (index > vector->size || index < 0) {
        return FALSE;
    } else {
        for (int i = index; i < vector->size - 1; ++i) {
            vector->element[i] = vector->element[i + 1];
        }

        vector->size = vector->size - 1;

        if (vector->capacity / 2 == vector->size) {
            vector->capacity = vector->capacity - (vector->capacity / 4);
            vector->element = realloc(vector->element, vector->capacity * sizeof(int));

        }

        return TRUE;
    }
}

int size(vector_t *vector)
{
    return vector->size;
}

int capacity(vector_t *vector)
{
    return vector->capacity;
}

bool empty(vector_t *vector)
{
    return !vector->size;
}

int search(vector_t *vector, int value)
{
    for (int i = 0; i < vector->size; ++i) {
        if (vector->element[i] == value) {
            return i;
        }
    }

    return -1;
}

/*It should randomly rearrange all the elements in the vector.

*/

int shuffle(vector_t* vector)
{
    for (int i = 0; i < vector->size; ++i) {
        int r = rand() % vector->size;
        int temp = vector->element[r];
        vector->element[r] = vector->element[i];
        vector->element[i] = temp;
    }


    for (int l = 0; l < vector->size; ++l) {
        printf("Random elements on index[%d]: %d\n", l, vector->element[l]);
    }

    return 0;
}