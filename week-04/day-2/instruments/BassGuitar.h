#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public  StringedInstrument
{
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    void play();

    void sound();


};


#endif //INSTRUMENTS_BASSGUITAR_H
