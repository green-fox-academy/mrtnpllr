#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void split_string(char* str);

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    scanf("%s", string);
    split_string(string);

    return(0);
}

void split_string(char* str)
{
    for (char *p = strtok(str, " "); p != NULL; p = strtok(NULL, " ")) {
        puts(p);
    }
}