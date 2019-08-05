#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* append_a(char *str);

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char str[256];

    printf("Enter a string\n");
    scanf("%s", str);

    char* str_app = append_a(str);
    printf("%s", str_app);

    return 0;
}

//OT KARATKERIG MUKODIK: DE MiERT? WUT?

char* append_a(char *str)
{
    int counter = 0;

    while (str[counter] != 0) {
        counter++;
        if (str[counter] == 0) {
            counter--;
            str[counter + 1] = 'a';
            break;
        }
    }


    return str;
}