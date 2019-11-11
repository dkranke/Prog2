#include "Punkt3D.hpp"

Punkt3D::Punkt3D(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {
    //ctor
}

Punkt3D::Punkt3D(const Punkt3D &original) : x(original.x), y(original.y), z(original.z) {
    //ctor
}

Punkt3D::~Punkt3D() {
    //dtor
}

Punkt3D* Punkt3D::clone() const {
    return new Punkt3D(*this);
}

string Punkt3D::toString() {
    stringstream ss;
    ss << "(" << x << ", " << y << "," << z << ")";
    return ss.str();
}
