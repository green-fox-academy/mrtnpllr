#include "Mammal.h"

Mammal::Mammal(const std::string &name) : Animal(name)
{}

std::string Mammal::getName()
{
    return _name;
}

std::string Mammal::breed()
{
    return std::string ("pushing miniature versions out");
}
