#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double sideA;
    double sideB;
    double sideC;

    std::cout <<"Please give me 3 sides!" << std::endl;

    std::cout << "First side: " << std::endl;
    std::cin >> sideA;
    std::cout << "Second side: " << std::endl;
    std::cin >> sideB;
    std::cout << "Third side: " << std::endl;
    std::cin >> sideC;

    double surfaceArea = (2 * sideA * sideB) + (2 * sideB * sideC) + (2 * sideA * sideC);
    double volume = (sideA * sideB * sideC);

    std::cout << "The Surface area of the cuboid is: " << surfaceArea << std::endl;
    std::cout << "The Volume of the cuboid is: " << volume << std::endl;

    return 0;
}