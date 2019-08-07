#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

typedef enum parity
{
    EVEN,
    ODD
} parity_t;

int generate_number(parity_t parity);

int* merge_arrays(int* src, int* dst);

int main()
{
    srand(time(NULL));

    int *pointer_even = NULL;
    pointer_even = (int *) malloc(10 * sizeof(int));
    int *pointer_odd = NULL;
    pointer_odd = (int *) malloc(10 * sizeof(int));

    int magic_number = 10;

    //Old solution
    /*for (int i = 0; i < magic_number; ++i) {
        do {
            pointer_even[i] = rand() % 100 + 1;
        } while (pointer_even[i] % 2 == 1);

        do {
            pointer_odd[i] = rand() % 100 + 1;
        } while (pointer_odd[i] % 2 == 0);
    }*/

    for (int i = 0; i < magic_number; ++i) {
        pointer_even[i] = generate_number(EVEN);
        pointer_odd[i] = generate_number(ODD);
    }

    int* merged_arrays = NULL;

    merged_arrays = merge_arrays(pointer_even, pointer_odd);

    for (int j = 0; j < 20; ++j) {
        printf("%d. value: %d\n", j + 1, merged_arrays[j]);
    }

    free(pointer_even);
    free(pointer_odd);
    free(merged_arrays);

    return 0;
}

int generate_number(parity_t parity)
{
    int num;

    switch (parity) {
        case EVEN :
            do {
                num = rand() % 100 + 1;
            } while (num % 2 == 1);
            return num;
        case ODD :
            do {
                num = rand() % 100 + 1;
            } while (num % 2 == 0);
            return num;
        default:
            break;
    }
}

int* merge_arrays(int* src, int* dst)
{
    dst = realloc(dst, sizeof(src));

    for (int i = 0; i < 10; ++i) {
        dst[10 + i] = src[i];
    }

    return dst;
}