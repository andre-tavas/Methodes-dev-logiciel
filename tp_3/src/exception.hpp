#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>
#include <iostream>
#include <typeinfo>
#include <demangle.hpp>


class ExceptionChaine : public std::exception{

    private:
        std::string type;
        std::string message;

    public:
        template <typename T>
        ExceptionChaine(const T& t);
        const char * what() const noexcept override;
};

template <typename T>
ExceptionChaine::ExceptionChaine(const T& t)
    : type(typeid(t).name()),
      message("Conversion en chaine impossible pour '"+demangle(type)+"'")
{};


#endif