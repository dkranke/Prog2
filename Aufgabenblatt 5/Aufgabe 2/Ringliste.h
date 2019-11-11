#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

#ifndef _H_RINGLISTE
#define _H_RINGLISTE

class Ringliste {
private:
    vector<int> liste;
    unsigned int kapazitaet;
    unsigned int anzahl;
    unsigned int lesemarker;
    unsigned int schreibmarker;
public:
    Ringliste(unsigned int = 10);
    int operator+=(int);
    bool operator==(const Ringliste&);
    unsigned int operator<<(int);
    unsigned int operator<<(Ringliste&);
    unsigned int operator>>(int&);
    string toString();
};

#endif // _H_RINGLISTE

// Domenik Kranke <domenik@kranke.de>
