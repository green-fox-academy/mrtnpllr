#include "ElectricGuitar.h"
#include <iostream>

void ElectricGuitar::sound()
{
    std::cout << " Twang" << std::endl;
}

ElectricGuitar::ElectricGuitar() : StringedInstrument("Electric Guitar", 6)
{}

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument("Electric Guitar", numberOfStrings)
{}
