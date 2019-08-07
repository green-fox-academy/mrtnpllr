#include <stdio.h>
#include <stdlib.h>

// with calloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits
// what's the difference between this and the previous exercise?
//Diff: the first one had memory junk, the calloc function fills the array with 0s on call

int main()
{
    int* pointer = NULL;

    pointer = (int*) calloc(10, sizeof(int));

    for (int i = 0; i < 5; ++i) {
        pointer[i] = i;
    }

    for (int j = 0; j < 10; ++j) {
        printf("%d. value: %d\n", j, pointer[j]);
    }

    free(pointer);

    return 0;
}