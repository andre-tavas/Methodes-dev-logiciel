#ifndef NUAGE_HPP
#define NUAGE_HPP

#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"
#include <vector>

// class Polaire;
// class Cartesien;

template<typename T>
class Nuage{

    std::vector<T> v;


    public:

        Nuage(Point* pontos);
        // ~Nuage();
        void ajouter(const T& p);
        unsigned int size() const;
        using const_iterator = typename std::vector<T>::const_iterator;
        const_iterator begin() const;
        const_iterator end() const;

};


template<typename T>
Nuage<T>::Nuage(){};

template<typename T>
void Nuage<T>::ajouter(const T& p){
    v.push_back(p);
};

template<typename T>
unsigned int Nuage<T>::size() const {
    return v.size();
};

template<typename T>
typename Nuage<T>::const_iterator Nuage<T>::begin() const{
    return v.begin();
};

template<typename T>
typename Nuage<T>::const_iterator Nuage<T>::end() const{
    return v.end();
};

template <typename T>
T barycentre_v1(const Nuage<T> n){

    double x_sum = 0;
    double y_sum = 0;

    for(typename Nuage<T>::const_iterator it = n.begin(); it != n.end(); it++){

        // const Cartesien c = dynamic_cast<const Cartesien>(*it);

/*         Cartesien c_(.0,.0);
        (*it).convertir(c_); 
        x_sum += c_.getX();
        y_sum += c_.getY();*/

        x_sum += it->getAngle();
        y_sum += it->getDistance();

        it->afficher(std::cout);
    }

    double x = 0;
    double y = 0;

    if(n.size()){
        x = x_sum / n.size();
        y = y_sum / n.size();
    }
    
    T result(x, y);

/*     Cartesien c(0, 0);
    c.setX(x);
    c.setY(y);
    c.convertir(result); */

    return result;
}

/* template <typename T>
class barycentre_functor {

    public:
        T operator() (const Nuage& n) const;
};

template <typename T>
T barycentre_functor<T>::operator() (const Nuage& n) const{
    Cartesien c = barycentre(n);
    T result;
    c.convertir(result);

    return result;
};

using BarycentreCartesien = barycentre_functor<Cartesien>;
using BarycentrePolaire = barycentre_functor<Polaire>; */

#endif