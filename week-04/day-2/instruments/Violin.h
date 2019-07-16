#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
public:

    Violin();

    Violin(int numberOfStrings);

    void sound() override;

};


#endif //INSTRUMENTS_VIOLIN_H
