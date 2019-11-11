#include "Punkt2D.hpp"

Punkt2D::Punkt2D(double _x, double _y) : x(_x), y(_y) {
    //ctor
}

Punkt2D::Punkt2D(const Punkt2D &original) : x(original.x), y(original.y) {
    //ctor
}

Punkt2D::~Punkt2D() {
    //dtor
}

Punkt2D* Punkt2D::clone() const {
    return new Punkt2D(*this);
}

string Punkt2D::toString() {
    stringstream ss;
    ss << "(" << x << ", " << y << ")";
    return ss.str();
}
