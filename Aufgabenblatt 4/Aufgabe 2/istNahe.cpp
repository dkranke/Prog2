#include "istNahe.h"
using namespace std;

istNahe::istNahe(double _n, double _tolerance) {
    n = _n;
    if (_tolerance >= 0) {
        tolerance = _tolerance;
    } else {
        tolerance = 0.0001;
    }
}

bool istNahe::operator()(double i) {
    return n - tolerance <= i && i <= n + tolerance;
}

// Domenik Kranke <domenik@kranke.de>
