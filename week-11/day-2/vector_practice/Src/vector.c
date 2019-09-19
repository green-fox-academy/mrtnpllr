#include "vector.h"
#include <string.h>

vector_t* realloc_vector(vector_t* vector)
{
	int* new = (int*)pvPortMalloc(2 * vector->size * sizeof(int));
	memcpy(new, vector->data, (vector->size * sizeof(int)));
	vPortFree(vector->data);
	vector->data = new;
	vector->capacity *= 2;

	return vector;
}

void vector_init(vector_t* vector)
{
	if(vector->size != 0){
		return;
	}

	vector->capacity = 0;
	vector->size = 0;

}

void vector_push_back(vector_t* vector, int data)
{
	if(vector->capacity == 0){
		vector->data = (int*)pvPortMalloc(10 * sizeof(int));
		vector->data[vector->size] = data;
		vector->capacity = 10;
		vector->size++;
	}else if(vector->capacity > vector->size){
		vector->data[vector->size] = data;
		vector->size++;
	}else if(vector->capacity == vector->size){
		vector = realloc_vector(vector);
		vector->data[vector->size] = data;
		vector->size++;
	}
}

void vector_pop_back(vector_t* vector)
{
	if(vector->size == 0){
		return;
	}

	vector->size--;
}

void vector_erase(vector_t* vector, int index)
{
	if(vector->size == 0 || vector->size < index || index < 0){
		return;
	}

	for(int i = index; i < vector->size; ++i){
		vector->data[i] = vector->data[i + 1];
	}

	vector->size--;
}

int vector_size(vector_t* vector)
{
	return vector->size;
}

int vector_get(vector_t* vector, int index)
{
	return vector->data[index];
}
