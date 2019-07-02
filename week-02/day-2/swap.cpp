#include <iostream>

void swap (int a, int b);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;

    swap(a, b);

    return 0;
}

void swap (int a, int b) {
    int *aPtr = &a;
    int *bPtr = &b;
    int tmp = *aPtr;

    a = b;
    b = tmp;

    std::cout << tmp << std::endl << a << std::endl << b << std::endl;
}