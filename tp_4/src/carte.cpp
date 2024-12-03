#include "carte.hpp"

Carte::Carte(int nb) : number(nb) {}

unsigned Carte::getValeur() const { return number; }