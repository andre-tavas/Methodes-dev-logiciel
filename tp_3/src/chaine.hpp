#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <iostream>
#include <sstream>
#include "exception.hpp"

template <typename T>
std::string chaine(const T obj){
    throw ExceptionChaine(obj);
};

template <>
std::string chaine(std::string obj){
    return obj;
};

template <>
std::string chaine(const int & obj){
    std::stringstream ss;
    ss << obj;
    return ss.str();
};

template <>
std::string chaine(double obj){
    return std::tostring(obj);
};

#endif