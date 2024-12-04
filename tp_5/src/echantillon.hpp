#ifndef ECHANTILLON_HPP_ASUDUSYAGASD
#define ECHANTILLON_HPP_ASUDUSYAGASD

#include <vector>
#include <cmath>
#include <algorithm>
#include "valeur.hpp"

class Echantillon{
    private:
        std::vector<Valeur> vector;
        

    public:
        Echantillon() {}
        
        unsigned getTaille() const { return vector.size(); }
        
        void ajouter(double n) {vector.push_back(Valeur(n)); }

        Valeur getMinimum() const {
            return *std::min_element(vector.begin(), vector.end(),
                            [](const Valeur& a, const Valeur& b){
                                return a.getNombre() < b.getNombre();
                            });
        }
        Valeur getMaximum() const {
            return *std::max_element(vector.begin(), vector.end(),
                            [](const Valeur& a, const Valeur& b){
                                return a.getNombre() < b.getNombre();
                            });
        }
};

#endif