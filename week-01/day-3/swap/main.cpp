#include <iostream>

int main(int argc, char* args[]) {

    // Swap the values of the variables
    //First comes my old solution, but now I'm using the swap function
    //int a = 123;
    //int b = 526;

    //std::cout << (a = b) << std::endl;

    //a = 123;
    //b = 526;

    //std::cout << (b = a) << std::endl;

    int a = 123;
    int b = 526;
    std::swap(a, b);

    std::cout << a << ", " << b << std::endl;

    return 0;
}