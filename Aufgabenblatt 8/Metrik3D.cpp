#include "Metrik3D.hpp"

Metrik3D::Metrik3D() {
    //ctor
}

Metrik3D::~Metrik3D() {
    //dtor
}

double Metrik3D::abstand(Punkt const &a, Punkt const &b) throw() {
    if (typeid(a).name() != TYPE_P3 || typeid(b).name() != TYPE_P3) {
        throw OperandenPassenNicht();
    }

    const Punkt3D a3D = *dynamic_cast<const Punkt3D*>(&a);
    const Punkt3D b3D = *dynamic_cast<const Punkt3D*>(&b);
    return sqrt(pow(abs(b3D.x - a3D.x), 2) * pow(abs(b3D.y - a3D.y), 2) * pow(abs(b3D.z - a3D.z), 2));
}
