#ifndef _H_PUNKT3D
#define _H_PUNKT3D

#include "Punkt.hpp"
using namespace std;

class Punkt3D : public Punkt {
    public:
        double x;
        double y;
        double z;

        Punkt3D(double, double, double);
        Punkt3D(const Punkt3D &);
        virtual ~Punkt3D();
        Punkt3D* clone() const;
        string toString();
};

#endif // _H_PUNKT3D
