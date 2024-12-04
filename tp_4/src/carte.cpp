#include "carte.hpp"

Carte::Carte(unsigned nb) : number(nb) {}

unsigned Carte::getValeur() const { 
    return number; }