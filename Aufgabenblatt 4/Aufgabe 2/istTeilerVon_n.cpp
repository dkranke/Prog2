#include "istTeilerVon_n.h"
using namespace std;

istTeilerVon_n::istTeilerVon_n(int _n = 1) {
    if (_n > 0) {
        n = _n;
    } else {
        n = 1;
    }
}

bool istTeilerVon_n::operator()(int i) {
    return i % n == 0;
}

// Domenik Kranke <domenik@kranke.de>
