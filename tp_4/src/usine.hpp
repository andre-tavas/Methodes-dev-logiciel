#ifndef USINE_HPP
#define USINE_HPP

#include <memory>
#include "carte.hpp"
#include <iostream>

class Carte;

// template <typename T, int N>
// class Usine{
//     private: 
//         unsigned current_element = 0;
//         const unsigned number_elements;
//         Usine(const Usine& u) = delete;
//         Usine& operator=(const Usine& u) = delete;
//     public:
//         Usine(const unsigned n = N);
//         std::unique_ptr<T> getT();
// };

// using UsineCarte = Usine<Carte, 52>;

class UsineCarte{
    private:
        unsigned current_card = 0;
        const unsigned number_cartes;
        UsineCarte(const UsineCarte& u) = delete;
        UsineCarte& operator=(const UsineCarte& u) = delete;
    public:
        // UsineCarte();
        UsineCarte(const unsigned n = 52);
        std::unique_ptr<Carte> getCarte();
};


#endif