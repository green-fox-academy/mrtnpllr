#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4

    int num1;
    int num2;

    std::cout << "Give me a number!" << std::endl;
    std::cin >> num1;

    for (int i = 1; i <= num1 ; i++) {
        int sum;
        std::cout << "Give me more numbers!" << std::endl;
        std::cin >> num2;

        for (int j = 1; j <= i; j++){
        }


    }

    return 0;
}