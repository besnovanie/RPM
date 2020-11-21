#include <iostream>
#include <string>
#include <fstream>
#include "Pokemon.hpp"

int writeFile(std::string filename, std::string data) {
    std::ofstream stream;
    stream.open(filename);
    if (stream.is_open()) {
        stream << data;
        return 0;
    } else {
        return 1;
    }
}

int main() {
    Pokemon pokemon = Pokemon("Pokemon 1", 100, 30, 30, 30);
    Bulbasaur bulbasaur = Bulbasaur();
    Charmander charmander = Charmander();

    writeFile("pokemon.txt", generatePokemonDataAsTXT(pokemon));
    writeFile("bulbasaur.txt", generatePokemonDataAsTXT(bulbasaur));
    writeFile("charmander.txt", generatePokemonDataAsTXT(charmander));

    return 0;
}
