#include "Violin.h"
#include <iostream>

Violin::Violin() : StringedInstrument(4)
{}

void Violin::sound()
{
    std::cout << " Screech" << std::endl;
}

void Violin::play()
{
    std::cout << "Violin, a " << getNumberOfStrings() << "-stringed instrument that goes ";
    sound();
}

Violin::Violin(int numberOfStrings) : StringedInstrument(numberOfStrings)
{}
