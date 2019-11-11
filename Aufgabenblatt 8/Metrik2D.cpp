#include "Metrik2D.hpp"

Metrik2D::Metrik2D() {
    //ctor
}

Metrik2D::~Metrik2D() {
    //dtor
}

double Metrik2D::abstand(Punkt const &a, Punkt const &b) throw() {
    if (typeid(a).name() != TYPE_P2 || typeid(b).name() != TYPE_P2) {
        throw OperandenPassenNicht();
    }

    const Punkt2D a2D = *dynamic_cast<const Punkt2D*>(&a);
    const Punkt2D b2D = *dynamic_cast<const Punkt2D*>(&b);

    return sqrt(pow(abs(b2D.x - a2D.x), 2) * pow(abs(b2D.y - a2D.y), 2));
}
