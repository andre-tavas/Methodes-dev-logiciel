#ifndef RESSOURCE_HPP
#define RESSOURCE_HPP

#include <cmath>

class Ressource{
    private:
        int stock;

    public:
        Ressource(int s) : stock(s) {}
        int getStock() const { return stock;}
        void consommer(int n) { 
            stock = std::fmax(stock - n, 0);
        }
        
};

#endif