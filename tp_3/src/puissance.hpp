#ifndef PUISSANCE_HPP
#define PUISSANCE_HPP

template <int N>
class Puissance{

    public:
        static double valeur(double x) {
            return x * Puissance<N-1>::valeur(x);
        };

};

template<>
class Puissance<0>{
    public:
        static double valeur(double){ return 1; };
};

//Puissance<4>(3) = 3 * Puissance<3>(3)

#endif