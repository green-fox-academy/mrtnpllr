#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int *aPtr = &a;
    int b = 17;
    int *bPtr = &b;
    int c = *aPtr + * bPtr;

    std::cout << c << std::endl;

    return 0;
}