#ifndef CLASSE_HPP_ASDONSAD
#define CLASSE_HPP_ASDONSAD


class Classe{
    private:
        double lower_bound;
        double upper_bound;
        unsigned quantite;
    
    public:
        Classe(double lb = 0, double ub = 0) : lower_bound(lb), upper_bound(ub), quantite(0) {}
        Classe(const Classe& c) 
            : lower_bound(c.getBorneInf()), upper_bound(c.getBorneSup()), quantite(c.getQuantite())
            {}
            
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


#endif