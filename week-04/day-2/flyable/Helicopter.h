#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Flyable.h"
#include "Vehicle.h"

class Helicopter : public Flyable, public Vehicle
{
public:
    Helicopter(int mass, int velocity, int accelaration);

    std::string land() override ;
    std::string fly() override ;
    std::string takeOff() override ;

public:

};


#endif //FLYABLE_HELICOPTER_H
