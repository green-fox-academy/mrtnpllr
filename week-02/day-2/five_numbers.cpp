#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array 
    // print out the values of that array using pointers again
    int input;
    int array[5];
    int *arrayPtr = array;

    std::cout << "Give me five numbers!" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> input;
        array[i] = input;
    }

    for (int j = 0; j < sizeof(array) / sizeof(array[0]); ++j) {
        std::cout << *arrayPtr + j << std::endl;
    }

    return 0;
}