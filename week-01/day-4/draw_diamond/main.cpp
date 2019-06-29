#include <iostream>
#include <math.h>

int main(int argc, char* args[])
{
    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was

    int num;

    std::cout << "Give me a number!" << std::endl;
    std::cin >> num;

    for (int i = 1; i < (num / 2) + 1; ++i) {
        for (int k = (num-i); k >= 0; k--) {
            std::cout << " ";
        }
        for (int j = 1; j <= (i*2) - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = ceil(num / 2.0f); i >= 1; --i) {
        for (int k = (num-i); k >= 0; k--) {
            std::cout << " ";
        }
        for (int j = 1; j <= (i*2) - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}