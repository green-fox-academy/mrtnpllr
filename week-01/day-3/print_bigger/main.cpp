#include <iostream>

int main(int argc, char* args[]) {

    //Write a program that asks for two numbers and prints the bigger one

    int num1;
    int num2;

    std::cout << "Give me two numbers (press enter after each input)" << std::endl;
    std::cin >> num1 >> num2;

    if (num1 > num2) {

        std::cout << num1 << " is bigger" << std::endl;

    } else if (num1 == num2) {

        std::cout << num1 << " and " << num2 << " are equal" << std::endl;

    } else {

        std::cout << num2 << " is bigger" << std::endl;

    }

    return 0;
}