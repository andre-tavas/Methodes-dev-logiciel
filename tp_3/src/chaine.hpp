#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <iostream>
#include <sstream>
#include "exception.hpp"

template <typename T>
std::string chaine(const T & obj){
    throw ExceptionChaine(obj);
};



template <typename T, typename ... OtherArgs>
std::string chaine(const T& a, const OtherArgs... rest){
    chaine(a) + " " + chaine(rest...);
    return chaine(a) + " " + chaine(rest...);; 
};

template <typename T, size_t... Is>
std::string chaine_bis(const T& t, std::index_sequence<Is...>){
    return chaine(std::get<Is>(t)...);
};

template <typename... ARGS>
std::string chaine(const std::tuple<ARGS...>& t){
    return chaine_bis(t,std::make_index_sequence<sizeof...(ARGS)>());
};

template <>
std::string chaine<std::string>(const std::string& obj){
    std::stringstream ss;
    ss << obj;
    return ss.str();
};

template <>
std::string chaine<int>(const int& obj){
    std::stringstream ss;
    ss << obj;
    return ss.str();
};

template <>
std::string chaine<double>(const double& obj){
    return std::to_string(obj);
};

#endif