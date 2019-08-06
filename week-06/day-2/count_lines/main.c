#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int open_txt(char *path);

int main()
{
    char path[] = "../my_file.txt";

    printf("The number of lines in the file: %d\n", open_txt(path));

    return 0;
}

int open_txt(char *path)
{
    int line_counter = 0;

    FILE *open_file = fopen(path, "r");
    if (open_file == NULL) {
        return 0;
    }

    char line[256];
    int size_of_line = sizeof(line) / sizeof(line[0]);

    while (fgets(line, 256, open_file)) {
        line_counter++;
    }

    return line_counter;
}