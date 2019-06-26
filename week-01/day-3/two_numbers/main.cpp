#include <iostream>

int main(int argc, char* args[]) {

    int x = 22;
    int y = 13;

    // Create a program that prints a few operations on two numbers: 22 and 13

    std::cout << (y + x) << std::endl; // Print the result of 13 added to 22

    std::cout << (x - y) << std::endl; // Print the result of 13 substracted from 22

    std::cout << (x * y) << std::endl; // Print the result of 22 multiplied by 13

    std::cout << ((float)x / (float)y) << std::endl; // Print the result of 22 divided by 13 (as a decimal fraction)

    std::cout << (x / y) << std::endl; // Print the integer part of 22 divided by 13

    std::cout << (x % y) << std::endl; // Print the remainder of 22 divided by 13

    return 0;
}