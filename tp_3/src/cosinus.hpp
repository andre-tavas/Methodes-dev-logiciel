#ifndef COSINUS_HPP
#define COSINUS_HPP

#include "puissance.hpp"
#include "factorielle.hpp"

template <int N>
class Cosinus{

    public:
        static double valeur(double x) {
            return Puissance<N>::valeur(-1) 
                    * Puissance<2*N>::valeur(x) / Factorielle<2*N>::valeur 
                    + Cosinus<N-1>::valeur(x);
        };

};


template <>
class Cosinus<0>{

    public:
        static double valeur(double ) {
            return 1;
        };

};

template <int N>
class Sinus{

    public:
        static double valeur(double x) {
            return Puissance<N>::valeur(-1) 
                    * Puissance<2*N+1>::valeur(x) / Factorielle<2*N+1>::valeur 
                    + Sinus<N-1>::valeur(x);
        };

};


template <>
class Sinus<0>{

    public:
        static double valeur(double x) {
            return x;
        };

};

#endif