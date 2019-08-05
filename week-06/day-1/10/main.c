#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("%d", is_even(num));

    return 0;
}