#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int write_txt_file(char *path);

int main()
{
    char path[] = "../my_file.txt";

    printf("The return of the write_txt_file fnct: %d", write_txt_file(path));

    return 0;
}

int write_txt_file(char *path)
{
    FILE *write = fopen(path, "w");
    if (write == NULL) {
        return -1;
    }

    char my_name[256] = "Marton Piller";

    fputs(my_name, write);

    fclose(write);

    return 1;
}