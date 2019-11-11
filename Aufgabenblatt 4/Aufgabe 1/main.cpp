#include <iostream>
#include <list>
#include <map>
#include <iostream>
using namespace std;

list<int> entferneDoppelte(list<int> original) {
    // Erstelle eine Kopie der Liste
    list<int> _copy(original);
    // Sortiere die Liste
    _copy.sort();
    // Entferne Duplikate
    _copy.unique();
    // Gebe die Kopie zurück
    return _copy;
}

list<int> gemeinsameWerte(list<int> first, list<int> second) {
    // Entferne die Duplikate aus beiden Listen
    first = entferneDoppelte(first);
    second = entferneDoppelte(second);
    // Gleiche die Listen ab
    list<int> result;
    for (int num1 : first) {
        for (int num2 : second) {
            if (num1 == num2) {
                result.push_back(num1);
            } else if (num1 > num2) {
                break;
            }
        }
    }
    // Gebe das Ergebnis zurück
    return result;
}

bool enthaeltGemeinsameWerte(list<int> first, list<int> second) {
    // Erstelle eine liste gemeinsamer Werte, ist mindestens ein Eintrag enthalten gibt es Duplikate
    return gemeinsameWerte(first, second).size() > 0;
}

map<int, int> zaehleListe(list<int> liste) {
    // Erstelle eine Map und erhöhe für jeden Eintrag der Liste einen Zähler
    map<int, int> result;
    for (int entry : liste) {
        result[entry]++;
    }
    // Gebe die Map zurück
    return result;
}

bool gleicheListen(list<int> first, list<int> second) {
    // Zähle beide Listen
    map<int, int> anzahlFirst = zaehleListe(first);
    map<int, int> anzahlSecond = zaehleListe(second);

    // Falls die Größe ungleich ist sind in einer Liste mehr Einträge, es beinhaltet also nicht die gleichen Einträge
    if (anzahlFirst.size() != anzahlSecond.size()) {
        return false;
    }

    // Falls die Anzahl der Elemente unterschiedlich ist gebe false zurück
    for (const auto& kv : anzahlFirst) {
        if (kv.second != anzahlSecond[kv.first]) {
            return false;
        }
    }

    // Sollte die Liste durchgelaufen sein, sind die Listen gleich
    return true;
}

void listeAuffuellen(list<int> &first, list<int> second) {
    // Zähle die Einträge beider Listen
    map<int, int> anzahlFirst = zaehleListe(first);
    map<int, int> anzahlSecond = zaehleListe(second);

    // Berechne die Differenz dieser Einträge
    for (const auto& kv : anzahlFirst) {
        if (anzahlSecond[kv.first] > 0) {
            anzahlSecond[kv.first] -= kv.second;
            if (anzahlSecond[kv.first] < 0) {
                anzahlSecond[kv.first] = 0;
            }
        }
    }

    // Füge die fehlenden Einträge hinzu
    for (const auto& kv : anzahlSecond) {
        for (int i = kv.second; i > 0; i--) {
            first.push_back(kv.first);
        }
    }
}

void ausgabe(list<int> _list) {
    cout << " {";
    for (int i : _list) {
        cout << " " << i;
    }
    cout << " }" << endl;
}

int main()
{
    list<int> first;
    list<int> second = {0,1,2};

    cout << "Start: " << endl;
    cout << "  first:";
    ausgabe(first);
    cout << "  second:";
    ausgabe(second);
    cout << endl;

    cout << "entferneDoppelte(first) = ";
    ausgabe(entferneDoppelte(first));
    cout << "entferneDoppelte(second) = ";
    ausgabe(entferneDoppelte(second));
    cout << "gemeinsameWerte(first, second) = ";
    ausgabe(gemeinsameWerte(first, second));
    cout << "enthaeltGemeinsameWerte(first, second) = " << enthaeltGemeinsameWerte(first, second) << endl;
    cout << "gleicheListen(first, second) = " << gleicheListen(first, second) << endl;
    listeAuffuellen(first, second);
    cout << "listeAuffuellen(&first, second) = ";
    ausgabe(first);
    cout << endl;

    for (int i = 0; i < 3; i++) {
        second.push_back(i);
    }
    cout << "Ende 1: " << endl;
    cout << "  first:";
    ausgabe(first);
    cout << "  second:";
    ausgabe(second);
    cout << endl;

    cout << "entferneDoppelte(first) = ";
    ausgabe(entferneDoppelte(first));
    cout << "entferneDoppelte(second) = ";
    ausgabe(entferneDoppelte(second));
    cout << "gemeinsameWerte(first, second) = ";
    ausgabe(gemeinsameWerte(first, second));
    cout << "enthaeltGemeinsameWerte(first, second) = " << enthaeltGemeinsameWerte(first, second) << endl;
    cout << "gleicheListen(first, second) = " << gleicheListen(first, second) << endl;
    listeAuffuellen(first, second);
    cout << "listeAuffuellen(&first, second) = ";
    ausgabe(first);
    cout << endl;

    cout << "Ende 2: " << endl;
    cout << "  first:";
    ausgabe(first);
    cout << "  second:";
    ausgabe(second);
    cout << endl;
    return 0;
}

// Domenik Kranke <domenik@kranke.de>