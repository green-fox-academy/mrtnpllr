#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define bool int

bool write_lines(char *path, char *word, int num);

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

int main()
{
    char path[] = "../multiple_lines.txt";
    char word[] = "apple";
    int number_of_lines = 5;

    printf("Result of function usage: %d\n", write_lines(path, word, number_of_lines));

    return 0;
}

bool write_lines(char *path, char *word, int num)
{
    FILE *fileptr = fopen(path, "w");

    if (fileptr == NULL) {
        return FALSE;
    }

    for (int i = 0; i < num; ++i) {
        fputs(word, fileptr);
        fputs("\n", fileptr);
    }

    return TRUE;
}