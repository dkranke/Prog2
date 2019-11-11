#include "Kreis.hpp"

Kreis::Kreis(Punkt2D _zentrum, double _radius) : zentrum(_zentrum), radius(_radius) {
    metrik = new Metrik2D();
}

Kreis::Kreis(const Kreis &original) : zentrum(*original.zentrum.clone()), radius(original.radius) {
    metrik = new Metrik2D();
}

Kreis::~Kreis() {
    delete &metrik;
    delete &zentrum;
    delete &radius;
}

void Kreis::setzeZentrum(Punkt2D zentrum) {
    this->zentrum = zentrum;
}

void Kreis::setzeRadius(double radius) {
    this->radius = radius;
}

double Kreis::inhalt() {
    return pow(radius, 2) * M_PI;
}

GeoObjekt* Kreis::clone() const {
    return new Kreis(*this);
}

string Kreis::toString() {
    stringstream ss;
    ss << "[" << zentrum.toString() << ", " << radius << "]";
    return ss.str();
}
