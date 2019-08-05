#include<stdio.h>

int main()
{
    // Greet 3 of your classmates with this program, in three separate lines
    // like:
    //
    // Hello, Esther!
    // Hello, Mary!
    // Hello, Joe!

    char* name_one = "Esther";
    char* name_two = "Mary";
    char* name_three = "Joe";

    printf("Hello, %s\n", name_one);
    printf("Hello, %s\n", name_two);
    printf("Hello, %s\n", name_three);

    return 0;
}