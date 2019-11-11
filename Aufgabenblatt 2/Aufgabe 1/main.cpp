#include <iostream>

using namespace std;

int main()
{
    // Deklariere die Variablen, beginne mit der h�chsten Zahl
    int zaehlerInt = INT_MAX;
    float zaehlerFloat = zaehlerInt;

    // Wiederhole solange bis die Zahl in den kleineren Datentyp passt
    while (zaehlerInt != zaehlerFloat) {
        // Reduziere die Zahl um 1 und setze den float auf die Zahl
        zaehlerInt--;
        zaehlerFloat = zaehlerInt;
    }
    // Erh�he den Z�hler
    // f�r die kleinste positive ganze Zahl die NICHT mehr darstellbar ist
    zaehlerInt++;

    // Gebe das Ergebnis aus
    cout << "ERSTER LOESUNGSANSATZ --- FALSCH" << endl;
    cout << "Maximaler int-Wert: " << INT_MAX << endl;
    cout << "Erreichter float-Wert: " << zaehleInt << endl;
    cout << "Differenz: " << (INT_MAX-zaehlerInt) << endl << endl;

    // Resette die Variablen, beginne mit 0
    zaehlerInt = 0;
    zaehlerFloat = 0;

    // Solange die Zaehler gleich sind
    while (zaehlerInt == zaehlerFloat) {
        // Inkrementiere diese um 1
        zaehlerInt++;
        zaehlerFloat++;
    }

    // Gebe das Ergebnis aus
    cout << "ZWEITER LOESUNGSANSATZ --- RICHTIG" << endl;
    cout << "Erreichter float-Wert: " << zaehlerInt << endl;
    return 0;
}

// Domenik Kranke <domenik@kranke.de>
