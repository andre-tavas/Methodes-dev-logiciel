#ifndef USINE_HPP
#define USINE_HPP

#include <memory>
#include "carte.hpp"

class Carte;

class UsineCarte{
    private:
        int current_card;

    public:
        std::unique_ptr<Carte> getCarte();
};


#endif