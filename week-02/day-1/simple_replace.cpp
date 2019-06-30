#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string example("In a dishwasher far far away");
    example.replace(5, 10, "galaxy");
    std::cout << example << std::endl;

    return 0;
}