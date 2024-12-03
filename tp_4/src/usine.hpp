#ifndef USINE_HPP
#define USINE_HPP

#include <memory>
#include "carte.hpp"

class Carte;

class UsineCarte{
    private:
        int current_card;
        UsineCarte(const UsineCarte& u) = delete;
        UsineCarte& operator=(const UsineCarte& u) = delete;
    public:
        UsineCarte();
        std::unique_ptr<Carte> getCarte();
};


#endif