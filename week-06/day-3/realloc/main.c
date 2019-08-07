#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int* pointer = NULL;
    int num;
    int sum = 0;

    printf("Enter a number:");
    scanf("%d", &num);

    //realloc(pointer, num * sizeof(int));
    pointer = (int*) malloc(num * sizeof(int));

    for (int i = 0; i < num; ++i) {
        printf("Enter a number %d more times:", num - i);
        scanf("%d", &pointer[i]);
        sum += pointer[i];
    }

    pointer = (int*)realloc(pointer, sum * sizeof(int));

    int counter = 0;
    while (counter < sum) {
        pointer[counter] = counter + 1;
        printf("%d. value: %d\n", counter + 1, pointer[counter]);
        counter++;
    }

    free(pointer);

    return 0;
}