#ifndef POINT_HPP
#define POINT_HPP
// Includes
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

// Déclarations anticipées
class Polaire;
class Cartesien;

class Point {

    public:
        Point();
        virtual void afficher(std::ostream& s = std::cout) const = 0;
        virtual void convertir(Polaire& p) const = 0;
        virtual void convertir(Cartesien& p) const = 0;

        friend std::ostream& operator<<(std::ostream& flux, const Point& p);

};

#endif