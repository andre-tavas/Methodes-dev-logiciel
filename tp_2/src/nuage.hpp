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

        Nuage();
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

    if(! n.size()){
        return T(.0,.0);
    }

    double x_sum = 0;
    double y_sum = 0;

    for(const T& point : n){
        Cartesien c_;
        point.convertir(c_);
        x_sum += c_.getX();
        y_sum += c_.getY();
    }

    double x = x_sum / n.size();
    double y = y_sum / n.size();
    T result(Cartesien(x, y));

    return result;
}

template <>
Polaire barycentre_v1(const Nuage<Polaire> n){

    if(! n.size()){
        return Polaire(.0,.0);
    }

    double angle_sum = 0;
    double distance_sum = 0;

    for(const Polaire& point : n){
        angle_sum += point.getAngle();
        distance_sum += point.getDistance();
    }

    double angle = angle_sum / n.size();
    double distance = distance_sum / n.size();
    
    Polaire result(angle, distance);

    return result;
}

template <typename T, template <typename> class Container>
T barycentre_v2(const Container<T> n){

    if(! n.size()){
        return T(.0,.0);
    }

    double x_sum = 0;
    double y_sum = 0;

    for(const T& point : n){
        Cartesien c_;
        point.convertir(c_);
        x_sum += c_.getX();
        y_sum += c_.getY();
    }

    double x = x_sum / n.size();
    double y = y_sum / n.size();
    T result(Cartesien(x, y));

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