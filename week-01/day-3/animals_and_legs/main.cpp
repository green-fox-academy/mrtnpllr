#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int chickens;
    int pigs;

    std::cout << "Number of chickens?" << std::endl;
    std::cin >> chickens;
    std::cout << "Number of pigs?" << std::endl;
    std::cin >> pigs;

    std::cout <<"Number of legs of all the animals combined: " << (chickens * 2) + (pigs *4) << std::endl;

    return 0;
}