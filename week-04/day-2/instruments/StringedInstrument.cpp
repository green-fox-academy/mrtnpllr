#include "StringedInstrument.h"
#include <iostream>

int StringedInstrument::getNumberOfStrings() const
{
    return _numberOfStrings;
}

void StringedInstrument::play()
{
    std::cout <<  _name <<", a " << getNumberOfStrings() << "-stringed instrument that goes ";
    sound();

}

StringedInstrument::StringedInstrument(const std::string &name, int numberOfStrings) : Instrument(name),
                                                                                       _numberOfStrings(numberOfStrings)
{}
