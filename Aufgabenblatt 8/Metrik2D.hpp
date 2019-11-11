#ifndef _H_METRIK2D
#define _H_METRIK2D

#include <typeinfo>
#include "MetrikVerhalten.hpp"
#include "Punkt2D.hpp"
#include "OperandenPassenNicht.hpp"
using namespace std;

class Metrik2D : public MetrikVerhalten {
    private:
        const char* TYPE_P2 = typeid(Punkt2D(0,0)).name();
    public:
        Metrik2D();
        virtual ~Metrik2D();
        double abstand(Punkt const &, Punkt const &) throw();
};

#endif // _H_METRIK2D
