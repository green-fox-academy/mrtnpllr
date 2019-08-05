#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_character(char * str, char c);

int main()
{
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
    //

    char str[256];
    char c;

    printf("Enter a string and a character: \n");
    scanf("%s", str);
    scanf(" %c", &c);

    printf("%d", find_character(str, c));


    return 0;
}

int find_character(char * str, char c)
{
    int i = 0;
    while(str[i] != 0) {
        if (str[i] == c) {
            return i;
        }
        i++;
    }

    return -1;
}