#include <stdio.h>
#include <stdlib.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char *repeat_string(char *str, int *repetition);

int main()
{
    char *string = "apple";
    int rep = 5;

    char *solution = repeat_string(string, &rep);

    printf("%s", solution);

    return 0;
}

char *repeat_string(char *str, int *repetition)
{
    char *tmp;
    int counter = 0;
    while (str[counter] != 0) {
        counter++;
    }

    tmp = (char *) malloc(counter * (*repetition) * sizeof(*str));

    for (int i = 0; i < *repetition; ++i) {
        for (int j = 0; j < counter; ++j) {
            tmp[(counter * i) + j] = str[j];
        }
    }

    tmp[counter * *repetition] = 0;

    free(repetition);

    return tmp;
}