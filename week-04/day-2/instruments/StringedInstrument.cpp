//
// Created by yello on 2019. 07. 16..
//

#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(int numberOfStrings) : _numberOfStrings(numberOfStrings)
{}

StringedInstrument::StringedInstrument()
{}

int StringedInstrument::getNumberOfStrings() const
{
    return _numberOfStrings;
}
