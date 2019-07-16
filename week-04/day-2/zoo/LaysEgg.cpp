#include "LaysEgg.h"

std::string LaysEgg::breed()
{
    return std::string ("laying eggs.");
}

LaysEgg::LaysEgg() : Animal()
{}

LaysEgg::LaysEgg(const std::string &name) : Animal(name)
{}
