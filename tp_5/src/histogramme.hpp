#ifndef HISTOGRAMME_HPP_ISAFHUASDA
#define HISTOGRAMME_HPP_ISAFHUASDA

#include "echantillon.hpp"
#include "valeur.hpp"

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
};

class Histo{
    private:
    double lb;
    double ub;
    double interval;
    std::vector<Classe> classes;

    public:
        Histo(double l, double u, unsigned n) : lb(l), ub(u) {
            interval = (ub-lb)/n;
            for (unsigned i = 0; i < n; ++i) classes.push_back(Classe(lb + interval*i,
                                                                      lb + interval*i + interval));
        }

        std::vector<Classe> getClasses() const { return classes; }
};


#endif