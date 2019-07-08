#include <iostream>
#include <string>
#include <exception>

float divideByTen(int num);

int main()
{
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    int num;

    std::cout << "Give me a number! I will divide 10 by that number." << std::endl;
    std::cin >> num;

    try {
        divideByTen(num);

        std::cout << divideByTen(num) << std::endl;

    }
    catch (std::string &e) {
        std::cout << e << std::endl;
    }

    return 0;
}

float divideByTen(int num)
{
    if (num == 0) {
        throw std::string("fail");
    }
    return 10 / num;
}