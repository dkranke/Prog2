#ifndef RECHTECK_HPP
#define RECHTECK_HPP

#include "GeoObjekt.hpp"
#include "Metrik2D.hpp"
#include "Punkt2D.hpp"
using namespace std;

class Rechteck : public GeoObjekt {
    private:
        Punkt2D lu;
        Punkt2D ro;

    public:
        Rechteck(Punkt2D, Punkt2D);
        Rechteck(const Rechteck &);
        virtual ~Rechteck();
        void setzePunktLu(Punkt2D const&);
        void setzePunktRo(Punkt2D const&);
        double inhalt();
        GeoObjekt* clone() const;
        string toString();
};

#endif // RECHTECK_HPP
