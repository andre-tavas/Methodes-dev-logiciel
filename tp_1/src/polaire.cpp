#include "polaire.hpp"

Polaire::Polaire(double a, double d) : angle(a), distance(d) {}

void Polaire::afficher(std::ostream& s) const{
    s << "(a=" << angle << ";d=" << distance << ")";
}

double Polaire::getAngle() const {return angle;}

double Polaire::getDistance() const { return distance;}

void Polaire::setAngle(double a) {angle = a;}

void Polaire::setDistance(double d) { distance = d; }