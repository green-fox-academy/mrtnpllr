#include <iostream>
#include <vector>

#include "pokemon.h"


std::vector<Pokemon> initializePokemons()
{
    std::vector<Pokemon> pokemons;

    pokemons.push_back(Pokemon("Balbasaur", "leaf", "water"));
    pokemons.push_back(Pokemon("Pikatchu", "electric", "water"));
    pokemons.push_back(Pokemon("Charizard", "fire", "leaf"));
    pokemons.push_back(Pokemon("Balbasaur", "water", "fire"));
    pokemons.push_back(Pokemon("Kingler", "water", "fire"));

    return pokemons;
}

int main(int argc, char* args[])
{
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();

    // Every pokemon has a name and a type.
    // Certain types are effective against others, e.g. water is effective against fire.

    // Ash has a few pokemon.
    // A wild pokemon appeared!

    Pokemon wildPokemon("Oddish", "leaf", "water");

    // Which pokemon should Ash use?

    std::string name;

    if (pokemonOfAsh.at(0).isEffectiveAgainst(wildPokemon)){
        name = pokemonOfAsh.at(0).getPokemonName();
    }
    if (pokemonOfAsh.at(1).isEffectiveAgainst(wildPokemon)){
        name = pokemonOfAsh.at(1).getPokemonName();
    }
    if (pokemonOfAsh.at(2).isEffectiveAgainst(wildPokemon)){
        name = pokemonOfAsh.at(2).getPokemonName();
    }
    if (pokemonOfAsh.at(3).isEffectiveAgainst(wildPokemon)){
        name = pokemonOfAsh.at(3).getPokemonName();
    }
    if (pokemonOfAsh.at(4).isEffectiveAgainst(wildPokemon)){
        name = pokemonOfAsh.at(4).getPokemonName();
    }

    std::cout << "I choose You, " << name << std::endl;
    return 0;
}