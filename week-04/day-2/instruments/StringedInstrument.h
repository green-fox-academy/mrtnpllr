#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument : public Instrument
{
public:
    StringedInstrument(int numberOfStrings);

    StringedInstrument();

    virtual void sound() = 0;

    int getNumberOfStrings() const;

protected:
    int _numberOfStrings;

};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
