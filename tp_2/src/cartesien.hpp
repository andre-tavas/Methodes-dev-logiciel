#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP
// Includes
#include "point.hpp"

// Déclarations anticipées
class Polaire;

class Cartesien : public Point {

    private:
        double x;
        double y;

    public:
        Cartesien(double x = 0.0, double y = 0.0);
        Cartesien(Polaire& p);
        void afficher(std::ostream& s = std::cout) const;
        void convertir(Polaire& p) const;
        void convertir(Cartesien& p) const;
        double getX() const;
        double getY() const;
        void setX(double a);
        void setY(double d);

};

#endif