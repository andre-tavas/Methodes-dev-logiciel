#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include "point.hpp"

class Cartesien : public Point {
    private:
        double x;
        double y;

    public:
        Cartesien(double x_ = 0, double y_ = 0);
        void afficher(std::ostream& s = std::cout) const override;
        double getX() const;
        double getY() const;
        void setX(double x_);
        void setY(double y_);
};

#endif