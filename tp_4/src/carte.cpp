#include "carte.hpp"

unsigned Carte::compteur = 0;

Carte::Carte(unsigned nb) : number(nb) {compteur++;}
Carte::~Carte() { compteur--;}

unsigned Carte::getValeur() const { return number; }
unsigned Carte::getCompteur() { return compteur; }
