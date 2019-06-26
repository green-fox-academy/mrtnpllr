#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    int num;
    char astrix = '*';

    std::cout << "Give me a number!" << std::endl;
    std::cin >> num;

    std::cout << astrix * num << std::endl;

    while (astrix < num) {

        std::cout << astrix << std::endl;
    }

    return 0;
}

//Work in progress