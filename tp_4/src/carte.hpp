#ifndef CARTE_HPP
#define CARTE_HPP

#include "usine.hpp"

class UsineCarte;

class Carte{

    private:
        unsigned number;
        static unsigned compteur; 

        Carte(unsigned n);
        
        Carte(const Carte& c) = delete;
        Carte() = delete;
        Carte& operator=(const Carte& c) = delete;
    public:
        unsigned getValeur() const;
        static unsigned getCompteur();
        ~Carte();

        friend class UsineCarte;
};

#endif
