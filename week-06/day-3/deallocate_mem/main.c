#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{

    srand(time(NULL));

    int *pointer = NULL;
    pointer = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        do {
            pointer[i] = rand() % 100 + 1;
        } while (pointer[i] % 2 == 1);
        printf("%d. value: %d\n", i + 1, pointer[i]);
    }

    realloc(pointer, 0);

    return 0;
}