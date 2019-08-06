#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *append_a(char *str, int size);

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char str[256];
    int size = 256;

    printf("Enter a string\n");
    scanf("%s", str);

    char *str_app = append_a(str, size);
    printf("%s", str_app);

    return 0;
}

char *append_a(char *str, int size)
{
    int counter = 0;

    ////Old solution

    /*while (str[counter] != 0) {
         counter++;
         if (str[counter] == 0) {
             counter--;
             str[counter + 1] = 'a';
             str[counter + 2] = 0;
             break;
         }
     }*/

    while (str[counter] != 0) {
        counter++;
    }

    if (counter < size - 1) {
        str[counter] = 'a';
        str[counter + 1] = 0;
        return str;
    }

    return str = "Error";
}