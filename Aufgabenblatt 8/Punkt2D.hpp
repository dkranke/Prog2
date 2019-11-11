#ifndef _H_PUNKT2D
#define _H_PUNKT2D

#include "Punkt.hpp"
using namespace std;

class Punkt2D : public Punkt {
    public:
        double x;
        double y;

        Punkt2D(double, double);
        Punkt2D(const Punkt2D &);
        virtual ~Punkt2D();
        Punkt2D* clone() const;
        string toString();
};

#endif // _H_PUNKT2D
