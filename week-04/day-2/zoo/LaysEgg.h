#ifndef ZOO_LAYSEGG_H
#define ZOO_LAYSEGG_H

#include "Animal.h"
#include <string>

class LaysEgg : public Animal
{
public:

    LaysEgg();

    LaysEgg(const std::string &name);

    virtual std::string breed() override;

};


#endif //ZOO_LAYSEGG_H
