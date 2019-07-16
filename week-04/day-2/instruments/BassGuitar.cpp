#include "BassGuitar.h"
#include <iostream>

void BassGuitar::sound()
{
    std::cout << " Duum-duum-duum" << std::endl;
}

BassGuitar::BassGuitar() : StringedInstrument("Bass guitar", 4)
{}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument("Bass guitar", numberOfStrings)
{}
