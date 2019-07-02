#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
    int input;
    int numbersArr[5];

    std::cout << "Give me five numbers!" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cin >> input;
        numbersArr[i] = input;
    }

    std::cout << std::endl;

    for (int j = 0; j < 5; ++j) {
        std::cout << &numbersArr[j] << std::endl;
    }

    return 0;
}