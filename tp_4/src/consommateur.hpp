#ifndef CONSOMMATEUR_HPP
#define CONSOMMATEUR_HPP

#include "ressource.hpp"
#include <memory>

class Consommateur{
    private:
        std::shared_ptr<Ressource> ressource;
        int besoin;
    public:
        Consommateur(int b, std::shared_ptr<Ressource> r) : besoin(b), ressource(r) {}
        void puiser() { 
            ressource->consommer(besoin);
            if (!ressource->getStock()) ressource.reset(); //destroi ponteiro
            }
};

#endif