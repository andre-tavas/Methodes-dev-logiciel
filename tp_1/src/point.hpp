#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point{

    public:
        virtual void afficher(std::ostream& s = std::cout) const = 0;

};



#endif