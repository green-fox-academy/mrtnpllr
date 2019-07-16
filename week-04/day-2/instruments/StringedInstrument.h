#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument : public Instrument
{
public:

    StringedInstrument(const std::string &name, int numberOfStrings);

    virtual void sound() = 0;

    int getNumberOfStrings() const;

    void play() override;

protected:
    int _numberOfStrings;

};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
