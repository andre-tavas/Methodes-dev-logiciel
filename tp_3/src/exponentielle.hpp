#ifndef EXPONENTIELLE_HPP
#define EXPONENTIELLE_HPP

#include "factorielle.hpp"
#include "puissance.hpp"

template <int N>
class Exponentielle{

    public:
        static double valeur(double x) {
            return Puissance<N>::valeur(x) / Factorielle<N>::valeur + Exponentielle<N-1>::valeur(x);
        };

};


template <>
class Exponentielle<0>{

    public:
        static double valeur(double ) {
            return 1;
        };

};

// Exponentielle<5>(1.5) = sum([1.5^k /Factorielle<k> for k in range(5)])
#endif