/*
 * -----------------------------------------------------------------------------
 *
 * Beispielprogramm: RinglisteSpielerei.cpp
 *
 * Verwendungsbeispiel der Klasse Ringliste
 *
 * Praktikum Programmierung 2, O. Henkel, HS Osnabrueck
 * -----------------------------------------------------------------------------
 */

#include "Ringliste.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
 Ringliste rListe(5);               // Kapazitaet=5
 cout << rListe.toString() << endl; // toString-Methode
 int i;
 rListe >> i;
 rListe << 1; // operator<< geeignet ueberladen
 rListe << 2;
 rListe << 3;
 cout << rListe.toString() << endl;
 rListe << 4;
 rListe << 5;
 rListe << 6;
 cout << rListe.toString() << endl;
 Ringliste vergleich(5);
 vergleich << 2;
 vergleich << 3;
 vergleich << 4;
 vergleich << 5;
 vergleich << 6;
 // erwartet: true
 cout << boolalpha << (rListe==vergleich) << endl;

 Ringliste drei; // Kapazitaet=10 (Default)
 drei << 3;
 drei << 3;
 drei << 3;
 drei+=6;        // operator+= geeignet ueberladen
 cout << drei.toString() << endl;

 rListe << drei; // operator<< geeignet ueberladen
 cout << rListe.toString() << endl;
 cout << drei.toString() << endl;

 return 0;
}
