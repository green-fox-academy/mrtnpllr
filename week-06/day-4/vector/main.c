#include "vector.h"

int main()
{
    srand(time(NULL));

    vector_t new_vector;
    vector_t new_vector2;
    vector_t new_vector3;

    init(&new_vector);
    init(&new_vector2);
    init(&new_vector3);

    push_back(&new_vector, 0);
    push_back(&new_vector, 1);
    push_back(&new_vector, 2);
    push_back(&new_vector, 3);
    push_back(&new_vector, 4);
    push_back(&new_vector, 5);
    push_back(&new_vector, 6);
    push_back(&new_vector, 7);
    push_back(&new_vector, 8);
    push_back(&new_vector, 9);
    push_back(&new_vector, 10);
    push_back(&new_vector, 11);
    push_back(&new_vector, 12);
    push_back(&new_vector, 13);
    push_back(&new_vector, 14);
    push_back(&new_vector, 15);
    push_back(&new_vector, 16);

#if 0

    printf("Size of vector: %d\n", new_vector.size);
    printf("Capacity of vector: %d\n\n", new_vector.capacity);

    for (int i = 0; i < new_vector.size; ++i) {
        printf("element:%d\n", new_vector.element[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n");

#endif

/*    insert(&new_vector, 111, 8);

    for (int i = 0; i < new_vector.size; ++i) {
        printf("element:%d\n", new_vector.element[i]);
    }

    printf("Size of new_vector:%d\n", size(&new_vector));
    printf("Capacity of new_vector:%d\n", capacity(&new_vector));
    printf("Empty check of new_vector:%d\n", empty(&new_vector));

    printf("\n");
    printf("\n");
    printf("\n");

    insert(&new_vector2, 5, 0);
    insert(&new_vector2, 7, 1);
    insert(&new_vector2, 5, 2);

    for (int j = 0; j < size(&new_vector2); ++j) {
        printf("new_vector2 elements: %d\n", new_vector2.element[j]);
    }

    printf("\n");
    printf("\n");
    printf("\n");

    printf("Trying out pop_back function\n");
    printf("Capacity:%d", capacity(&new_vector));

    pop_back(&new_vector);

    for (int i = 0; i < new_vector.size; ++i) {
        printf("element:%d\n", new_vector.element[i]);
    }

    printf("\n");

    pop_back(&new_vector);

    for (int i = 0; i < new_vector.size; ++i) {
        printf("element:%d\n", new_vector.element[i]);
    }

    printf("\n");

    pop_back(&new_vector);

    for (int i = 0; i < new_vector.size; ++i) {
        printf("element:%d\n", new_vector.element[i]);
    }

    printf("Capacity:%d", capacity(&new_vector));
    printf("\n");
    printf("\n");
    printf("\n");*/

    /*push_back(&new_vector3, 0);
    push_back(&new_vector3, 1);
    push_back(&new_vector3, 2);
    push_back(&new_vector3, 3);
    push_back(&new_vector3, 4);
    push_back(&new_vector3, 5);
    push_back(&new_vector3, 6);
    push_back(&new_vector3, 7);
    push_back(&new_vector3, 8);
    push_back(&new_vector3, 9);
    push_back(&new_vector3, 10);
    push_back(&new_vector3, 11);
    push_back(&new_vector3, 12);
    push_back(&new_vector3, 13);
    push_back(&new_vector3, 14);
    push_back(&new_vector3, 15);
    push_back(&new_vector3, 16);

    for (int i = 0; i <size(&new_vector3); ++i) {
        printf("new_vector3:%d\n", new_vector3.element[i]);
    }

    printf("\n");
    printf("Trying out delete\n");

    printf("Capacity: %d\n", capacity(&new_vector));

    delete(&new_vector3, 5);
    delete(&new_vector3, 5);
    delete(&new_vector3, 5);
    delete(&new_vector3, 5);
    delete(&new_vector3, 5);
    delete(&new_vector3, 5);

    printf("Capacity: %d\n", capacity(&new_vector3));

    for (int i = 0; i <size(&new_vector3); ++i) {
        printf("new_vector3:%d\n", new_vector3.element[i]);
    }

    printf("\n");
    printf("Test search:\n");

    printf("Search element 2: %d\n\n", search(&new_vector3, 2));
    printf("Search element 23: %d\n\n", search(&new_vector3, 23));

    shuffle(&new_vector3);

    for (int j = 0; j < new_vector3.size; ++j) {
        printf("Shuffled vector elements: %d\n", new_vector3.element[j]);
    }

    printf("\n");
    printf("\n");
    printf("\n");

    sort(&new_vector3);

    for (int j = 0; j < new_vector3.size; ++j) {
        printf("Sorted vector elements: %d\n", new_vector3.element[j]);
    }
*/

    vector_t check_unique_vector;
    init(&check_unique_vector);

    push_back(&check_unique_vector, 1);
    push_back(&check_unique_vector, 1);
    push_back(&check_unique_vector, 1);
    push_back(&check_unique_vector, 1);
    push_back(&check_unique_vector, 2);
    push_back(&check_unique_vector, 5);
    push_back(&check_unique_vector, 2);
    push_back(&check_unique_vector, 6);
    push_back(&check_unique_vector, 3);
    push_back(&check_unique_vector, 7);
    push_back(&check_unique_vector, 3);
    push_back(&check_unique_vector, 3);
    push_back(&check_unique_vector, 4);
    push_back(&check_unique_vector, 9);
    push_back(&check_unique_vector, 4);
    push_back(&check_unique_vector, 4);

    unique(&check_unique_vector);

    for (int i = 0; i < check_unique_vector.size; ++i) {
        printf("Elements after unique: %d\n", check_unique_vector.element[i]);
    }

    return 0;
}