#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main()
{
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int first_number;
    int second_number;

    printf("Enter two numbers!\n");
    scanf("%d%d", &first_number, &second_number);

    printf("%d", are_equal(first_number, second_number));

    return 0;
}