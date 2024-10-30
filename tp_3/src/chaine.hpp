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
std::string chaine<std::string>(std::string obj){
    return obj;
};

template <>
std::string chaine<int>(const int obj){
    std::stringstream ss;
    ss << obj;
    return ss.str();
};

template <>
std::string chaine<double>(double obj){
    return std::to_string(obj);
};

#endif