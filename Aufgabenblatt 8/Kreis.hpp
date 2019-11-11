#ifndef _H_KREIS
#define _H_KREIS

#include <cmath>
#include "GeoObjekt.hpp"
#include "Metrik2D.hpp"
#include "Punkt2D.hpp"
using namespace std;

#define M_PI 3.14159265359

class Kreis : public GeoObjekt {
    private:
        Punkt2D zentrum;
        double radius;

    public:
        Kreis(Punkt2D, double);
        Kreis(const Kreis &);
        virtual ~Kreis();
        void setzeZentrum(Punkt2D);
        void setzeRadius(double);
        double inhalt();
        GeoObjekt* clone() const;
        string toString();
};

#endif // _H_KREIS
