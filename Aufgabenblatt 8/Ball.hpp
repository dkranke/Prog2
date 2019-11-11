#ifndef _H_BALL
#define _H_BALL

#include <cmath>
#include "GeoObjekt.hpp"
#include "Metrik3D.hpp"
#include "Punkt3D.hpp"
using namespace std;

#define M_PI 3.14159265359

class Ball : public GeoObjekt {
    private:
        Punkt3D zentrum;
        double radius;

    public:
        Ball(Punkt3D, double);
        Ball(const Ball &);
        virtual ~Ball();
        void setzeZentrum(Punkt3D);
        void setzeRadius(double);
        double inhalt();
        GeoObjekt* clone() const;
        string toString();
};

#endif // _H_BALL
