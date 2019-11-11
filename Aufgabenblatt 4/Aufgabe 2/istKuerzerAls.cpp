#include "istKuerzerAls.h"
using namespace std;

bool istKuerzerAls::operator()(string first, string second) {
    return first.size() < second.size();
}

// Domenik Kranke <domenik@kranke.de>
