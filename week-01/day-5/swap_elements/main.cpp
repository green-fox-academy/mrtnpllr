
#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string abc[] = {"first", "second", "third"};
    std::string tmp = abc[0];

    abc[0] = abc[2];
    abc[2] = tmp;

    return 0;
}