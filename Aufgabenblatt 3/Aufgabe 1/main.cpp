#include <iostream>
using namespace std;

// euklischer Algorithmus
void ggT(int &a, int b) {
    // Falls a = 0 ist, gebe b zurück
    if (a == 0) {
       a = b;
       return;
    }

    // Solange b ungleich 0 ist
    while (b != 0) {
        // Falls a größer als b ist
        if (a > b) {
            // Berechne a
            a = a - b;
        }
        // Sonst
        else {
            // Berechne b
            b = b - a;
        }
    }
}

int main()
{
    // Variablen deklarieren und gültige Werte einlesen
    int a = -1;
    while (a < 0) {
        cout << "Erste nicht negative Zahl: ";
        cin >> a;
    }
    int b = -1;
    while (b < 0) {
        cout << "Zweite nicht negative Zahl: ";
        cin >> b;
    }
    // Das ggT berechnen und das Ergebnis ausgeben
    ggT(a, b);
    cout << "Ergebnis: " << a << endl;

    return 0;
}

// Domenik Kranke <domenik@kranke.de>