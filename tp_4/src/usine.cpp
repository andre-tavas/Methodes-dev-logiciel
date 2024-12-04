#include "usine.hpp"

// UsineCarte::UsineCarte() {}

UsineCarte::UsineCarte(const unsigned n) : number_cartes(n) {}

std::unique_ptr<Carte> UsineCarte::getCarte(){
    if(current_card < number_cartes){
        std::unique_ptr<Carte> p(new Carte(current_card));
        current_card++;
        return p;
    }else{
        return nullptr;
    }
}