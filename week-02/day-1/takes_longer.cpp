#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    quote.replace(21, 22, "always takes longer than ");
    std::cout << quote << std::endl;

    return 0;
}