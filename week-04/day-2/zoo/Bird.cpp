#include "Bird.h"

Bird::Bird(const std::string &name) : LaysEgg(name)
{

}

std::string Bird::getName()
{
    return _name;
}

