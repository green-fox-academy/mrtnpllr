#include <iostream>

int main(int argc, char *arcs[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int num;

    std::cout << "Give me a number!" << std::endl;
    std::cin >> num;

    for (int i = 1; i <= num; ++i) {
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