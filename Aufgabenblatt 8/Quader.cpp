#include "Quader.hpp"

Quader::Quader(Punkt3D _luv, Punkt3D _roh) : luv(_luv), roh(_roh) {
    metrik = new Metrik3D();
}

Quader::Quader(const Quader &original) : luv(original.luv), roh(original.roh) {
    metrik = new Metrik3D();
}

Quader::~Quader() {
    //dtor
}

void Quader::setzePunktLuv(Punkt3D const& luv) {
    this->luv = luv;
}

void Quader::setzePunktRoh(Punkt3D const& roh) {
    this->roh = roh;
}

double Quader::inhalt() {
    Punkt3D p1 = *new Punkt3D(luv.x, 0, 0);
    Punkt3D p2 = *new Punkt3D(roh.x, 0, 0);
    double w = metrik->abstand(p1, p2);
    p1.x = 0; p2.x = 0;
    p1.y = luv.y; p2.y = roh.y;
    double h = metrik->abstand(p1, p2);
    p1.y = 0; p2.y = 0;
    p1.z = luv.z; p2.z = roh.z;
    double t = metrik->abstand(p1, p2);
    return w * h * t;
}

GeoObjekt* Quader::clone() const {
    return new Quader(*this);
}

string Quader::toString() {
    stringstream ss;
    ss << "[" << luv.toString() << ", " << roh.toString() << "]";
    return ss.str();
}
