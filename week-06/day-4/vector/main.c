#include <stdio.h>
#include "vector.h"

int main()
{

    vector_t new_vector;
    init(&new_vector);

    push_back(&new_vector, 5);
    push_back(&new_vector, 1);
    push_back(&new_vector, 3);
    push_back(&new_vector, 4);
    push_back(&new_vector, 6);
    push_back(&new_vector, 7);
    push_back(&new_vector, 8);
    push_back(&new_vector, 9);

    printf("element:%d\n", *new_vector.element);
    printf("element:%d\n", new_vector.element[1]);
    printf("element:%d\n", new_vector.element[2]);
    printf("element:%d\n", new_vector.element[3]);
    printf("Size of vector:%d\n", new_vector.size);
    printf("Capacity of vector:%d\n\n", new_vector.capacity);

    for (int i = 0; i < 8; ++i) {
        printf("element:%d\n", new_vector.element[i]);
    }


    return 0;
}