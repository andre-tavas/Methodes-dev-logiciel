#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include "point.hpp"

class Polaire : public Point {

    private:
        double angle;
        double distance; 

    public:
        Polaire(double a = 0, double d = 0);
        void afficher(std::ostream& s = std::cout) const override;
        double getAngle() const;
        double getDistance() const;
        void setAngle(double a);
        void setDistance(double d);
};

#endif