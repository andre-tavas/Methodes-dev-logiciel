#ifndef USINE_HPP
#define USINE_HPP

#include <memory>
#include "carte.hpp"
#include <iostream>

class Carte;

class UsineCarte{
    private:
        unsigned current_card = 0;
        const unsigned number_cartes;
        UsineCarte(const UsineCarte& u) = delete;
        UsineCarte& operator=(const UsineCarte& u) = delete;
    public:
        // UsineCarte();
        UsineCarte(const unsigned n = 52);
        std::unique_ptr<Carte> getCarte();
};


#endif