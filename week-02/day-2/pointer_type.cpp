#include <iostream>

int main()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    int *aPtr = &a;
    double b = 432.2;
    double *bPtr = &b;
    std::string name = "Bob";
    std::string *namePtr = &name;

    std::cout << aPtr << std::endl << bPtr << std::endl << namePtr << std::endl;

    return 0;
}