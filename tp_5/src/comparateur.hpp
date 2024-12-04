#ifndef COMPARATEUR_HPP_ISAFHUASDA
#define COMPARATEUR_HPP_ISAFHUASDA

#include "classe.hpp"

struct ComparateurQuantite{
    public:
        bool operator()(const Classe& a, const Classe& b) const {
            return (a.getQuantite() == b.getQuantite() ? a < b : a.getQuantite() > b.getQuantite());
        }
};


#endif