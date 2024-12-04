#include "paquet.hpp"

std::ostream& operator<<(std::ostream& out, const paquet_t& p){
    for(auto& carte : p){
        out << carte->getValeur() << " ";
    }
    return out;
}

