#include "BassGuitar.h"
#include <iostream>

BassGuitar::BassGuitar() : StringedInstrument(4)
{}

void BassGuitar::sound()
{
    std::cout << " Duum-duum-duum" << std::endl;
}

void BassGuitar::play()
{
    std::cout << "Bass Guitar, a " << getNumberOfStrings() << "-stringed instrument that goes ";
    sound();
}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings)
{}
