#ifndef _H_METRIK3D
#define _H_METRIK3D

#include <typeinfo>
#include "MetrikVerhalten.hpp"
#include "Punkt3D.hpp"
#include "OperandenPassenNicht.hpp"
using namespace std;

class Metrik3D : public MetrikVerhalten {
    private:
        const char* TYPE_P3 = typeid(Punkt3D(0,0,0)).name();
    public:
        Metrik3D();
        virtual ~Metrik3D();
        double abstand(Punkt const &, Punkt const &) throw();
};

#endif // _H_METRIK3D
