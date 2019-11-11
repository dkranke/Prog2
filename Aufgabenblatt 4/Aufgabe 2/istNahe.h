#ifndef _H_ISTNAHE
#define _H_ISTNAHE

class istNahe {
private:
    double n;
    double tolerance;
public:
    istNahe(double _n, double _tolerance = 0.0001);
    bool operator()(double i);
};

#endif // _H_ISTNAHE

// Domenik Kranke <domenik@kranke.de>
