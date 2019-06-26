#include <iostream>

int main(int argc, char* args[]) {

    // Swap the values of the variables
    int a = 123;
    int b = 526;



    std::cout << (a = b) << std::endl;

    a = 123;
    b = 526;

    std::cout << (b = a) << std::endl;



    return 0;
}