#include "Ball.hpp"

Ball::Ball(Punkt3D _zentrum, double _radius) : zentrum(_zentrum), radius(_radius) {
    metrik = new Metrik3D();
}

Ball::Ball(const Ball &original) : zentrum(*original.zentrum.clone()), radius(original.radius) {
    metrik = new Metrik3D();
}

Ball::~Ball() {
    delete &metrik;
    delete &zentrum;
    delete &radius;
}

void Ball::setzeZentrum(Punkt3D zentrum) {
    this->zentrum = zentrum;
}

void Ball::setzeRadius(double radius) {
    this->radius = radius;
}

double Ball::inhalt() {
    return 4/3 * pow(radius, 3) * M_PI;
}

GeoObjekt* Ball::clone() const {
    return new Ball(*this);
}

string Ball::toString() {
    stringstream ss;
    ss << "[" << zentrum.toString() << ", " << radius << "]";
    return ss.str();
}
