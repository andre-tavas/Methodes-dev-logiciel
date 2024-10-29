#include "cartesien.hpp"
#include "polaire.hpp"

Cartesien::Cartesien(double x_, double y_)
    : x(x_), y(y_)
    {}

Cartesien::Cartesien(Polaire& p)
    : x(p.getDistance() * std::cos(p.getAngle() * M_PI / 180)), 
      y(p.getDistance() * std::sin(p.getAngle() * M_PI / 180))
    {}

void Cartesien::afficher(std::ostream &s) const{
    s << "(x=" << x << ";y=" << y << ")";
}

void Cartesien::convertir(Polaire& p) const {
    double a = std::atan2(getY(), getX()) * 180 / M_PI;
    p.setAngle(a);

    double d = std::hypot(getX(), getY());
    p.setDistance(d);

}

void Cartesien::convertir(Cartesien& p) const {
    p.setX(getX());
    p.setY(getY());
}


double Cartesien::getX() const {
    return x;
}

double Cartesien::getY() const {
    return y;
}

void Cartesien::setX(double x_){
    x = x_;
}

void Cartesien::setY(double y_){
    y = y_;
}

