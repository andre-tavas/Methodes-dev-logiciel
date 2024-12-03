#include "usine.hpp"

UsineCarte::UsineCarte() {}

std::unique_ptr<Carte> UsineCarte::getCarte(){
    if(current_card <= 51){
        std::unique_ptr<Carte> p(new Carte(current_card));
        current_card++;
        return p;
    }else{
        return nullptr;
    }
}