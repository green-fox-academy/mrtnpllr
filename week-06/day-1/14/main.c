#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_str_equal(char* str1, char* str2);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char str1[256];
    char str2[256];

    printf("Enter two strings\n");
    scanf("%s", str1);
    scanf("%s", str2);

    printf("%d", is_str_equal(str1, str2));


    return 0;
}

int is_str_equal(char* str1, char* str2)
{
    for(int i = 0; str1[i]; i++){
        str1[i] = tolower(str1[i]);
    }

    for(int i = 0; str2[i]; i++){
        str2[i] = tolower(str2[i]);
    }

    for(int i = 0; str2[i]; i++){
        if (str1[i] != str2[i]) {
            return 0;
        }
    }

    return 1;
}