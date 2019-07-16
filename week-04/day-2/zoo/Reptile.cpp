#include "Reptile.h"

Reptile::Reptile(const std::string &name) : LaysEgg(name)
{

}

std::string Reptile::getName()
{
    return _name;
}
