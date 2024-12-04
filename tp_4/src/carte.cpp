#include "carte.hpp"

Carte::Carte(unsigned nb) : number(nb) {
    std::cout << "carte constructor " << number << std::endl;
    }

unsigned Carte::getValeur() const { 
    return number; }