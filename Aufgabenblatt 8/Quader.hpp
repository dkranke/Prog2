#ifndef _H_QUADER
#define _H_QUADER

#include "GeoObjekt.hpp"
#include "Metrik3D.hpp"
#include "Punkt3D.hpp"
using namespace std;

class Quader : public GeoObjekt {
    private:
        Punkt3D luv;
        Punkt3D roh;

    public:
        Quader(Punkt3D, Punkt3D);
        Quader(const Quader &);
        virtual ~Quader();
        void setzePunktLuv(Punkt3D const&);
        void setzePunktRoh(Punkt3D const&);
        double inhalt();
        GeoObjekt* clone() const;
        string toString();
};

#endif // _H_QUADER
