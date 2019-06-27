#include <iostream>

int main (int argc, char* arcs[]) {

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

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout <<"*";
            }
        for (int k =1; k <= i; k++) {
            std::cout << " ";
        }
        std::cout << "\n";

    }

return 0;
}