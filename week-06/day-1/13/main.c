#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str_lenght(char* str);

int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char name[256];

    printf("Enter your name: \n");
    scanf("%s", name);

    printf("%d\n", str_lenght(name));
    printf("%d\n", strlen(name));

    return 0;
}

int str_lenght(char* str)
{
    int counter = 0;

    while (str[counter] != 0) {
        counter++;
    }

    return counter;
}