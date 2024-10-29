#ifndef POLAIRE_HPP
#define POLAIRE_HPP

// Includes
#include "point.hpp"

// Déclarations anticipées

class Polaire : public Point {

    private:
        double angle;
        double distance;

    public:
        Polaire(double a = 0.0, double d = 0.0);
        Polaire(const Cartesien& p);
        void afficher(std::ostream& s = std::cout) const;
        void convertir(Cartesien& p) const;
        void convertir(Polaire& p) const;
        double getAngle() const;
        double getDistance() const;
        void setAngle(double a);
        void setDistance(double d);
    
};

#endif