#include "istTeilerVon_n.h"
#include "istNahe.h"
#include "istKuerzerAls.h"
#include "besitztMehrWorteAls.h"
#include <iostream>
using namespace std;

int main()
{
    // Predikate deklarieren und initialisieren
    istTeilerVon_n tv2(2);
    istNahe n3(3);
    istKuerzerAls ka;
    besitztMehrWorteAls mwa;

    // Testen
    cout << "istTeilerVon_2(1) = " << tv2(1) << endl;
    cout << "istTeilerVon_2(2) = " << tv2(2) << endl;
    cout << "istNahe3(3) = " << n3(3) << endl;
    cout << "istNahe3(4) = " << n3(4) << endl;
    cout << "istKuerzerAls(\"abcdef\", \"ghi\") = " << ka("abcdef", "ghi") << endl;
    cout << "istKuerzerAls(\"abc\", \"defghi\") = " << ka("abc", "defghi") << endl;
    cout << "besitztMehrWorterAls(\"a bc def\", \"gh i\") = " << mwa("a bc def", "gh i") << endl;
    cout << "besitztMehrWorterAls(\"a bc\", \"def gh i\") = " << mwa("a bc", "def gh i") << endl;
    return 0;
}

// Domenik Kranke <domenik@kranke.de>