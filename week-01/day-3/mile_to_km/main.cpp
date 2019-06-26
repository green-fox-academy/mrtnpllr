#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for a double that is a distance in miles,
    // then it converts that value to kilometers and prints it

    double distanceInMile;

    std::cout << "Please enter the distance in miles: " << std::endl;
    std::cin >> distanceInMile;
    std::cout << distanceInMile << "mile equals to " <<  (distanceInMile * 1.609344) << "km" << std::endl;

    return 0;
}