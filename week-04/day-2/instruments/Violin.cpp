#include "Violin.h"
#include <iostream>

void Violin::sound()
{
    std::cout << " Screech" << std::endl;
}

Violin::Violin() : StringedInstrument("Violin", 4)
{}

Violin::Violin(int numberOfStrings) : StringedInstrument("Violin", numberOfStrings)
{}
