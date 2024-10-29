#include "cartesien.hpp"

Cartesien::Cartesien(double x_, double y_) : x(x_), y(y_) {}

void Cartesien::afficher(std::ostream& s) const{
    s << "(x=" << x << ";y=" << y << ")";
}

double Cartesien::getX() const {return x;}

double Cartesien::getY() const { return y;}

void Cartesien::setX(double x_) {x = x_;}

void Cartesien::setY(double y_) { y = y_; }