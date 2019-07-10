#include "pokemon.h"

Pokemon::Pokemon(const std::string& name, const std::string& type, const std::string& effectiveAgainst)
{
    _name = name;
    _type = type;
    _effectiveAgainst = effectiveAgainst;
}

bool Pokemon::isEffectiveAgainst(Pokemon anotherPokemon)
{
    return _effectiveAgainst == anotherPokemon._type;
}

std::string Pokemon::getPokemonName()
{
    return _name;
}

std::string Pokemon::getPokemonType()
{
    return _type;
}

std::string Pokemon::setPokemonType(std::string type)
{
    _type = type;
}