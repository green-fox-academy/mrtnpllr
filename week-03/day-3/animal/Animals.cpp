//
// Created by yello on 2019. 07. 10..
//

#include "Animals.h"

Animals::Animals() : _hunger(50), _thirst(50)
{}

int Animals::getHunger() const
{
    return _hunger;
}

void Animals::setHunger(int hunger)
{
    Animals::_hunger = hunger;
}

int Animals::getThirst() const
{
    return _thirst;
}

void Animals::setThirst(int thirst)
{
    Animals::_thirst = thirst;
}

int Animals::eat()
{
    return _hunger--;
}

int Animals::drink()
{
    return _thirst--;
}

int Animals::play()
{
    return _thirst++, _hunger++;
}
