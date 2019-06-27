#include <iostream>

int main (int argc, char* args[]) {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    int secNum = 42;
    int guessNum;

    do {
        std::cout << "Guess the number! \n: " << std::endl;
        std::cin >> guessNum;

        if (guessNum < secNum) {
        std::cout << "The stored number is higher" << std::endl;
        }else if (guessNum > secNum) {
        std::cout << "The stored number is lower" << std::endl;
        } else if (guessNum == secNum) {
            std::cout << "You found the meaning of life, which is: " << secNum << std::endl;
        }

    } while (guessNum != secNum);

return 0;
}