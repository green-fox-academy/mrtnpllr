#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");
    quote.replace(20, 0, "always takes longer than");
    quote.replace(20, 0, " ");
    std::cout << quote << std::endl;

    return 0;
}