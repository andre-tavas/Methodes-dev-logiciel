#ifndef HISTOGRAMME_HPP_ISAFHUASDA
#define HISTOGRAMME_HPP_ISAFHUASDA

#include "echantillon.hpp"
#include "valeur.hpp"
#include <set>
#include <iostream>
#include <functional>

class Classe{
    private:
        double lower_bound;
        double upper_bound;
        unsigned quantite;
    
    public:
        Classe(double lb = 0, double ub = 0) : lower_bound(lb), upper_bound(ub), quantite(0) {}

        double getBorneInf() const { return lower_bound; }
        double getBorneSup() const { return upper_bound; }
        unsigned getQuantite() const { return quantite; }

        void setBorneInf(const double lb) { lower_bound = lb; }
        void setBorneSup(const double ub) { upper_bound = ub; }
        void setQuantite(const unsigned q) { quantite = q; }

        void ajouter() { quantite++; }

        friend bool operator<(const Classe& a, const Classe& b);
        friend bool operator>(const Classe& a, const Classe& b);
        // friend bool operator==(const Classe& a, const Classe& b);

};

bool operator<(const Classe& a, const Classe& b){
    return a.getBorneInf() < b.getBorneInf();
}

bool operator>(const Classe& a, const Classe& b){
    return a.getBorneInf() > b.getBorneInf();
}

// bool operator==(const Classe& a, const Classe& b){
//     return a.getBorneInf() == b.getBorneInf() && a.getBorneSup() == b.getBorneSup();
// }

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