#ifndef _H_GEOOBJEKT
#define _H_GEOOBJEKT

#include <string>
#include <sstream>
#include <typeinfo>
#include <cstring>
#include "MetrikVerhalten.hpp"
#include "OperandenPassenNicht.hpp"
using namespace std;

class GeoObjekt {
    protected:
        MetrikVerhalten* metrik;
    public:
        virtual GeoObjekt* clone() const = 0;
        virtual double inhalt() = 0;
        virtual string toString() = 0;
        virtual GeoObjekt& assign(const GeoObjekt &) throw();
        GeoObjekt& operator=(const GeoObjekt &) throw();
};

#endif // _H_GEOOBJEKT
