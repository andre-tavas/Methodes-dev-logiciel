#include "polaire.hpp"
#include "cartesien.hpp"

Polaire::Polaire(double a, double d)
    : angle(a), distance(d)
    {}

Polaire::Polaire(const Cartesien& p)
    : angle(std::atan2(p.getY(), p.getX()) * 180 / M_PI),
      distance(std::hypot(p.getX(), p.getY()))
    {}

void Polaire::afficher(std::ostream &s) const{
    s << "(a=" << angle << ";d=" << distance << ")";
}

void Polaire::convertir(Cartesien& p) const {
    double x = getDistance() * std::cos(getAngle() * M_PI / 180);
    double y = getDistance() * std::sin(getAngle() * M_PI / 180);

    p.setX(x);
    p.setY(y);
}

void Polaire::convertir(Polaire& p) const {
    p.setAngle(getAngle());
    p.setDistance(getDistance());
}


double Polaire::getAngle() const {
    return angle;
}

double Polaire::getDistance() const {
    return distance;
}

void Polaire::setAngle(double a){
    angle = a;
}

void Polaire::setDistance(double d){
    distance = d;
}

