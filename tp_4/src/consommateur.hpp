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
            if (ressource){
            ressource->consommer(besoin);
            if (!ressource->getStock()) ressource = nullptr; //destroi ponteiro
            }
        }
};

#endif