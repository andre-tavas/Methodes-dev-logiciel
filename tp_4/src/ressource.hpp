#ifndef RESSOURCE_HPP
#define RESSOURCE_HPP

#include <cmath>
#include <memory>
#include <vector>
#include <iostream>

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

using ressources_t = std::vector<std::weak_ptr<Ressource>>;

std::ostream& operator<<(std::ostream& out, const ressources_t& ressources);

#endif