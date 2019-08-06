#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main ()
{
    char path[] = "../my_file.txt";

    FILE* open_txt;
    open_txt = fopen(path, "r");

    char line[256];
    int size_of_line = sizeof(line) / sizeof(line[0]);
    while (fgets(line, size_of_line, open_txt)) {
        printf("%s", line);
    }

    fclose(open_txt);

    return 0;
}