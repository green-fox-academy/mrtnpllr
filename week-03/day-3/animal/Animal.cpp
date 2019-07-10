#include "Animal.h"

Animal::Animal()
{
    _hunger = 50;
    _thirst = 50;
}

int Animal::getHunger()
{
    return _hunger;
}

int Animal::getThirst()
{
    return _thirst;
}

int Animal::eat()
{
    return _hunger--;
}

int Animal::drink()
{
    return _thirst--;
}

int Animal::play()
{
    return _hunger++, _thirst++;
}
