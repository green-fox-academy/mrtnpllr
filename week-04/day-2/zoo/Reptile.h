#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H

#include "Animal.h"
#include "LaysEgg.h"

class Reptile : public LaysEgg
{
public:
    Reptile(const std::string &name);

    std::string getName() override;

public:

};


#endif //ZOO_REPTILE_H
