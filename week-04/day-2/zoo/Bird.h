#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include "Animal.h"
#include "LaysEgg.h"

class Bird : public LaysEgg
{
public:
    Bird(const std::string &name);

    std::string getName() override;

public:

};

#endif //ZOO_BIRD_H
