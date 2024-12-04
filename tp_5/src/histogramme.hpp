#ifndef HISTOGRAMME_HPP_ISAFHUASDA
#define HISTOGRAMME_HPP_ISAFHUASDA

#include "echantillon.hpp"
#include "valeur.hpp"
#include "comparateur.hpp"
#include "classe.hpp"
#include <set>
#include <iostream>
#include <functional>



template <typename COMPARATEUR = std::less<Classe>>
class Histogramme{
    using classes_t = std::set<Classe, COMPARATEUR>;

    private:
        double lb;
        double ub;
        double interval;
        classes_t classes;

    public:
        Histogramme(double l, double u, unsigned n) : lb(l), ub(u) {
            interval = (ub-lb)/n;
            for (unsigned i = 0; i < n; ++i){
                classes.insert(Classe(lb + interval*i, lb + interval*i + interval));
            }
        }

        const classes_t getClasses() const { return classes; }

        void ajouter(const Valeur& v) {
            const auto it = std::find_if(classes.begin(), classes.end(),
                                        [&v](const Classe& classe){
                                            return (v.getNombre() >= classe.getBorneInf()
                                                    && v.getNombre() < classe.getBorneSup());
                                        }
                                        );
            
            if (it != classes.end()) {
                Classe classe = *it;

                classe.ajouter();
                classes.erase(it);
                classes.insert(classe);
            }
        }

        void ajouter(const Echantillon& e) {
            for(unsigned i = 0; i < e.getTaille(); i++) ajouter(e.getValeur(i));
        }
};


#endif