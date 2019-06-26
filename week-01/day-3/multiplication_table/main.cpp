#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for a number and prints the multiplication table with that number
    //
    // Example:
    // The number 15 should print:
    //
    // 1 * 15 = 15
    // 2 * 15 = 30
    // 3 * 15 = 45
    // 4 * 15 = 60
    // 5 * 15 = 75
    // 6 * 15 = 90
    // 7 * 15 = 105
    // 8 * 15 = 120
    // 9 * 15 = 135
    // 10 * 15 = 150

    int num;

    std::cout << "Give me a number! " << std::endl;
    std::cin >> num;

    if (num != 0) {
        for (int i = 1; i <= 10; i++) {
            std::cout << i << " * " << num << " = " << (i * num) << std::endl;
        }
    } else {
        std::cout << "Don't bother me with 0, it's gonna be always zero!" << std::endl;
    }


    return 0;
}