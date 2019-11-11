#include "Rechteck.hpp"

Rechteck::Rechteck(Punkt2D _lu, Punkt2D _ro) : lu(_lu), ro(_ro) {
    metrik = new Metrik2D();
}

Rechteck::Rechteck(const Rechteck &original) : lu(original.lu), ro(original.ro) {
    metrik = new Metrik2D();
}

Rechteck::~Rechteck() {
    //dtor
}

void Rechteck::setzePunktLu(Punkt2D const& lu) {
    this->lu = lu;
}

void Rechteck::setzePunktRo(Punkt2D const& ro) {
    this->ro = ro;
}

double Rechteck::inhalt() {
    Punkt2D p1 = *new Punkt2D(lu.x, 0);
    Punkt2D p2 = *new Punkt2D(ro.x, 0);
    double w = metrik->abstand(p1, p2);
    p1.x = 0; p2.x = 0;
    p1.y = lu.y; p2.y = ro.y;
    double h = metrik->abstand(p1, p2);
    return w * h;
}

GeoObjekt* Rechteck::clone() const {
    return new Rechteck(*this);
}

string Rechteck::toString() {
    stringstream ss;
    ss << "[" << lu.toString() << ", " << ro.toString() << "]";
    return ss.str();
}
