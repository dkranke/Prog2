#include "Ringliste.h"

Ringliste::Ringliste(unsigned int _kapazitaet) {
    kapazitaet = _kapazitaet;
    anzahl = 0;
    schreibmarker = 0;
    lesemarker = 0;
    liste = vector<int>(kapazitaet);
}

int Ringliste::operator+=(int zahl) {
    for (unsigned int i = 0; i < anzahl; i++) {
        liste[i] += zahl;
    }
    return zahl;
}

map<int, int> zaehleListe(vector<int> liste) {
    // Erstelle eine Map und erh�he f�r jeden Eintrag der Liste einen Z�hler
    map<int, int> result;
    for (int entry : liste) {
        result[entry]++;
    }
    // Gebe die Map zur�ck
    return result;
}

bool gleicheListen(vector<int> first, vector<int> second) {
    // Z�hle beide Listen
    map<int, int> anzahlFirst = zaehleListe(first);
    map<int, int> anzahlSecond = zaehleListe(second);

    // Falls die Gr��e ungleich ist sind in einer Liste mehr Eintr�ge, es beinhaltet also nicht die gleichen Eintr�ge
    if (anzahlFirst.size() != anzahlSecond.size()) {
        return false;
    }

    // Falls die Anzahl der Elemente unterschiedlich ist gebe false zur�ck
    for (const auto& kv : anzahlFirst) {
        if (kv.second != anzahlSecond[kv.first]) {
            return false;
        }
    }

    // Sollte die Liste durchgelaufen sein, sind die Listen gleich
    return true;
}

bool Ringliste::operator==(const Ringliste& rliste) {
    return gleicheListen(liste, rliste.liste);
}

unsigned int Ringliste::operator<<(int i) {
    liste[schreibmarker] = i;
    schreibmarker = (schreibmarker+1) % kapazitaet;
    if (anzahl < kapazitaet) {
        anzahl++;
    }
    return schreibmarker;
}

unsigned int Ringliste::operator<<(Ringliste& rlist) {
    for (unsigned int i = 0; i < rlist.anzahl; i++) {
        rlist >> liste[schreibmarker];
        schreibmarker = (schreibmarker+1) % kapazitaet;
        if (anzahl < kapazitaet) {
            anzahl++;
        }
    }
    return schreibmarker;
}

unsigned int Ringliste::operator>>(int& i) {
    i = liste[lesemarker];
    lesemarker = (lesemarker+1) % (anzahl | 1);
    return lesemarker;
}

string Ringliste::toString() {
    string output = "";
    if (anzahl > 0) {
        output = to_string(liste[0]);
        for (unsigned int i = 1; i < anzahl; i++) {
            output += " " + to_string(liste[i]);
        }
    }
    return output;
}
