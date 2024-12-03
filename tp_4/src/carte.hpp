#ifndef CARTE_HPP
#define CARTE_HPP

#include "usine.hpp"

class UsineCarte;

class Carte{

    private:
        int number;
        Carte(int n);
        
        Carte(const Carte& c) = delete;
        Carte() = delete;
        Carte& operator=(const Carte& c) = delete;
    public:
        unsigned getValeur() const;

        friend class UsineCarte;
};

#endif
