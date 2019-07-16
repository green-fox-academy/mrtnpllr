#include "ElectricGuitar.h"
#include <iostream>

ElectricGuitar::ElectricGuitar() : StringedInstrument(6)
{}

void ElectricGuitar::sound()
{
    std::cout << " Twang" << std::endl;
}

void ElectricGuitar::play()
{
    std::cout << "Electric Guitar, a " << getNumberOfStrings() << "-stringed instrument that goes ";
    sound();
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings)
{}
