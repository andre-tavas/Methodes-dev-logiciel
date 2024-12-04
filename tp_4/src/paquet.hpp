#ifndef PAQUET_HPP
#define PAQUET_HPP

#include "usine.hpp"
#include <memory>
#include <vector>

// template <typename T>
// class Paquet{
//     private:
//         std::vector<std::unique_ptr<Carte>> elements; 
//     public:
//         friend std::ostream& operator<<(const std::ostream& out, const Paquet<T> p);
// };

using paquet_t = std::vector<std::unique_ptr<Carte>>;

template <typename T, typename U>
void remplir(std::vector<std::unique_ptr<T>>& paquet, U& usine){
    
    // enquanto usina nao retornar ponteiro nulo, vai botando em paquet
    while(true){
        std::unique_ptr<T> element(usine.getCarte());
        if (element == nullptr) break;
        paquet.push_back(std::move(element));
    }
};

std::ostream& operator<<(std::ostream& out, const paquet_t& p);


#endif