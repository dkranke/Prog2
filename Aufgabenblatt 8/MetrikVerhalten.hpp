#ifndef _H_METRIKVERHALTEN
#define _H_METRIKVERHALTEN

#include <cmath>
#include "Punkt.hpp"
using namespace std;

class MetrikVerhalten {
    public:
        virtual double abstand(Punkt const &, Punkt const &) = 0;
};

#endif // _H_METRIKVERHALTEN
